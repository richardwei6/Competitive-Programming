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

bool caps(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (islower(s[i])) {
			return 0;
		}
	}
	return 1;
}


void solve() {
	string s;
	cin >> s;
	if (caps(s)) {
		for (int i = 0; i < s.size(); i++) {
			if (i == 0 && islower(s[i])) {
				s[i] = toupper(s[i]);
			}
			else {
				s[i] = tolower(s[i]);
			}
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
