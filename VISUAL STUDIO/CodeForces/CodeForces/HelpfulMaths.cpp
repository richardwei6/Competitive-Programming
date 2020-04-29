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
	string s, o;
	cin >> s;
	int a[4]{};
	for (auto i : s) {
		if (isdigit(i)) {
			a[i - '0']++;
		}
	}
	for (int i = 1; i < 4; i++) {
		for (; a[i]--;) {
			o += to_string(i)+"+";
		}
	}
	o.erase(begin(o)+o.size()-1);
	cout << o << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
