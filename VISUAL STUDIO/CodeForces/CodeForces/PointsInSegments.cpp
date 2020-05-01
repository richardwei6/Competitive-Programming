
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
	int n, m;
	cin >> n >> m;
	int t[101]{};
	vector<vector<int>> p;
	vector<int> o;
	for (; n--;) {
		int a, b;
		cin >> a >> b;
		p.push_back({ a,b });
	}
	for (auto i : p) {
		for (int a = i[0]; a <= i[1]; a++) {
			t[a] = 1;
		}
	}
	for (int i = 1; i <= m; i++) {
		if (t[i] == 0) {
			o.push_back(i);
		}
	}
	cout << o.size() << endl;
	for (int i : o) {
		cout << i << " ";
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
