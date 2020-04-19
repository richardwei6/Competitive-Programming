/*
ID: richard154
PROG: dualpal
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
	if (s[0] == '0' || s[s.size() - 1] == '0') { // no trailing or leading zeros
		return 0;
	}
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
	reverse(begin(t), end(t));
	return t;
}

bool solve(int n) { // see if num is palidromic in two or more bases
	int t = 0; // times its palidromic in any base
	for (int base = 2; base <= 10; base++) {
		if (isPalindrome(toBaseN(base, n))) {
			t++;
		}
	}
	return t >= 2;
}

int main() {
	ofstream fout("dualpal.out");
	ifstream fin("dualpal.in");
	int t;
	fin >> t;

	int start;
	fin >> start;

	for (int i = start+1; t; i++) {
		if (solve(i)) {
			fout << i << endl;
			t--;
		}
	}

	return 0;
}*/