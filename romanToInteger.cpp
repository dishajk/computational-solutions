#include <iostream>
#include <unordered_map>

using namespace std;

int romantoint(string s);

int main ()
{
	string roman;
	cout <<  "Enter the roman numeral \n";
	cin >> roman;
	cout << "\n"<< romantoint(roman) << "\n" ;
	return 0;
}

int romantoint(string s) {

	unordered_map<char,int> arabic;

	arabic['I'] = 1;
	arabic['V'] = 5;
	arabic['X'] = 10;
	arabic['L'] = 50;
	arabic['C'] = 100;
	arabic['D'] = 500;
	arabic['M'] = 1000;

	int number = arabic[s[0]];
	for (int i = 1; i < s.length(); i++){
		if (arabic[s[i]] > arabic[s[i-1]]){	
			number -= arabic[s[i-1]];
			number += arabic[s[i]]-arabic[s[i-1]];
		}else{
		number += arabic[s[i]];
		}
	}
	return number;
}
