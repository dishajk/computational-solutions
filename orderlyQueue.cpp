#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string orderlyQueue(string s, int k);
string vectorCharToString(vector<char> charVec);

int main ()
{
	string result = orderlyQueue("kuh",1);
	cout << "result is\t" << result << "\n";
	return 0;
}

string orderlyQueue(string s, int k){

	vector<char> lexi(s.begin(), s.end());	//store string s in vector lexi

// Find the smallest k chars in s
// push letter in the back until any small enters first k
// 	check if smallest, if yes push until another small enters, if second smallest continue pushing, if not push back the small until second smallest comes and so on.
//
}

string vectorCharToString(vector<char> charVec){
	string result;
		transform(charVec.begin(), charVec.end(), back_inserter(result),
				[](char c)
			{
				return c;
				});
		return result;

}

int lexiCheck(vector<char> word, int m){
	int n = 0;
	for (int i = 1; i < m, i++){
		if (word[i] < word[i-1])
	}
}
