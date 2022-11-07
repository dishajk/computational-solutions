#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int search(vector<int>& nums, int target);

int main ()
{
	vector<int> vect{3,1};
	cout << search(vect, 2);
	return 0;
}

int search(vector<int>& nums, int target) {
	int index;
	int n = nums.size();

	if (nums[0] == target){
		index = 0;
		cout << "Checking if 1st is equal to target\n";
	}else if (n == 1){
		index = -1;
	}else{
		int k;					
		cout << "Checking if > 1 is equal to target\n";
		for (int i = 1; i < n; i++){
			if (nums[i] == target){
				cout << "is the " << i <<"th term equal to target? \n";
				index = i;
				break;
			}else if(nums[i] < nums[i-1]){
				k = i;				//find the pivot k
				cout << "found the pivot " << k << "\n";
				if(target < nums[k] || target > nums [k-1]){
					cout <<"target is outside boundary\n";
					index = -1;
					break;
				}else{
					cout <<"target is inside boundary - initiating bisection method\n";

					//bisection method for finding target between k and n-1
					
					int left = k;
					int right = n-1;
					int middle;
					while(abs(left-right)>1){
						middle = (left+right)/2;
						if (target < nums[middle]){
							right = middle;
						}else if (target == nums[middle]){
							index = middle;
							break;
						}else{
							left = middle;
						}
					}

					if (left == right){
						if(target == nums[left]){
							index = left;
						}else{
							index = -1;
						}
					}else{
						if(target == nums[left]){
							index = left;
						}else if (target == nums[right]){
							index = right;
						}else{
							index = -1;
						}
					}
				}
			}else{
				index = -1;
				continue;
			}
		}
	}

	return index;
}
