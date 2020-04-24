#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
/*
void solve() {
	string s, o;
	cin >> s;
	o = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (o[0] <= s[i]) {
			o.insert(begin(o), s[i]);
		}
		else {
			o += s[i];
		}
	}
	cout << o << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
*/