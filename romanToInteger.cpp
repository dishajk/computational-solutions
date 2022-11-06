#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int romantoint(string s);
int arabic (char roman);

int main ()
{
	string roman;
	cout <<  "Enter the roman numeral \n";
	cin >> roman;
	cout << "\n"<< romantoint(roman) << "\n" ;
	return 0;
}

int romantoint(string s) {

	int number = arabic(s[0]);
	for (int i = 1; i < s.length(); i++){
		if (arabic(s[i]) > arabic(s[i-1])){	
			number -= arabic(s[i-1]);
			number += arabic(s[i])-arabic(s[i-1]);
		}else{
		number += arabic(s[i]);
		}
	}
	return number;
}

int arabic (char roman){
	if (roman == 'I'){
		return 1;
	}else if (roman == 'V'){
		return 5;
	}else if (roman == 'X'){
		return 10;
	}else if (roman == 'L'){
		return 50;
	}else if (roman == 'C'){
		return 100;
	}else if (roman == 'D'){
		return 500;
	}else if (roman == 'M'){
		return 1000;
	}else{
		return 0;
	}
}
