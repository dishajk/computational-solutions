#include <iostream>
#include <string>
#include <vector>

using namespace std;

string orderlyQueue(string s, int k);

int main ()
{
	cout<<orderlyQueue("cba",1);

	return 0;
}

string orderlyQueue(string s, int k){

	vector<char> lexi(s.begin(), s.end());	//store string s in vector lexi
	string previous;

	do{
	string previous(lexi.begin(),lexi.end());
	//Choose the biggest char among the first k characters
	int big = 0;
	for(int i = 1; i < k; i++){
		if(lexi[i] > lexi[big]){
			big = i;
		}
	}
	//Append the chosen character to end
	lexi.emplace_back(lexi[big]);
	lexi.erase(lexi.begin()+big);
	string current(lexi.begin(),lexi.end());
	cout << current;
	}
	while(previous < current); //until current < previous
	//return previous 
	return previous;
}
