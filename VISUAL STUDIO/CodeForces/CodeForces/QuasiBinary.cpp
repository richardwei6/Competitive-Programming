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


void solve() {
	string n;
	cin >> n;
	int mx = 0;
	for (auto i : n) {
		mx = max(mx, i - '0');
	}
	vector<vector<int>> a(n.size(),vector<int>(mx , 0) );
	vector<string> o;
	for (int i = 0; i < n.size(); i++) {
		string t;
		int p = n[i] - '0';
		for (int j = 0; j < p; j++) {
			a[i][j] = 1;
		}
	}
	int m = 0;
	for (int i = 0; i < mx; i++) {
		string t;
		for (int j = 0; j < n.size(); j++) {
			t += to_string(a[j][i]);
		}
		o.push_back(t);
	}
	cout << o.size() << endl;
	for (auto i : o) {
		cout << stoi(i) << " ";
	}
	cout << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/