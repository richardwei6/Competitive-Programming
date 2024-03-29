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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector

void solve() {
	int n, m, moves = 0;
	cin >> n >> m;
	if (n < m) {
		for (int i = m; i!=n;moves++) {
			if (i > n) {
				if (i % 2 == 0) {
					i /= 2;
				}
				else {
					i++;
				}
			}
			else {
				i++;
			}
		}
	}
	else {
		moves = n - m;
	}
	cout << moves << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
