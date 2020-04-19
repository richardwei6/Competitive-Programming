/*
ID: richard154
PROG: palsquare
LANG: C++
*/
/*
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;

bool isPalindrome(string s) {
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			return 0;
		}
	}
	return 1;
}


char convert(int num) // turns nums into 1-9 and a-b
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

string toBaseN(int base, int base10Num) {
	string t; // figure out a way to make this string
	for (; base10Num > 0; base10Num /= base) {
		t += convert(base10Num % base);
	}
	// ending for string
	reverse(begin(t),end(t));
	return t;
}

int main() {
	ofstream fout("palsquare.out");
	ifstream fin("palsquare.in");dddd
	int base;
	fin >> base;

	for (int i = 1; i <= 300; i++) { // base 10
		string n = toBaseN(base, i); // program stuck here
		string nP = toBaseN(base, i * i);
		if (isPalindrome(  nP )  ) { // need to find the square of this base num
			fout << n << " " << nP << endl;
		}
	}

	return 0;
}*/