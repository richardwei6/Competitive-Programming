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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
/*
void solve() {
	set<int> o;
	unordered_map<int, int> a;
	int n;
	cin >> n;
	for (int i = 0; i < (2 * n) - 1; i++) {
		for (int j = 0; j < n; j++) {
			int p;
			cin >> p;
			a[p]++;
		}
	}
	for (auto i : a) {
		if (i.second%2!=0) {
			o.insert(i.first);
		}
	}

	for (int i : o) {
		cout << i << " ";
	}
	cout << endl;
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