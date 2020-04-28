/*
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
#include <limits>
#include <list>
#include <memory>
#include <stack>
#include <iterator>
#include <queue>
#include <numeric>

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector

bool isVowel(char i) {
	if (islower(i)) {
		i = toupper(i);
	}
	return i == 'A' || i == 'O' || i == 'Y' || i == 'E' || i == 'U' || i == 'I';
}


void solve() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
	//	cout << s << endl;
		if (isVowel(s[i])) {
			s.erase(begin(s) + i);
			i--;
		}
		else if (isalpha(s[i])) { // consonant
			if (isupper(s[i])) {
				s[i] = tolower(s[i]);
			}
			s.insert(begin(s)+i, '.');
			i++;
		}
	}


	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
