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
	char d;
	cin >> d;
	string s, a = ":qwertyuiop:asdfghjkl;:zxcvbnm,./:" , o;
	cin >> s;
	for (auto i : s) {
		if (d == 'L') {
			auto p = a.find(i);
			if (a[p + 1] == ':') {
				o += a[p - 9];
			}
			else {
				o += a[p+1];
			}
		}
		else {
			auto p = a.find(i);
			if (a[p -1 ] == ':') {
				o += a[p + 9];
			}
			else {
				o += a[p-1];
			}
		}
	}
	cout << o << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
