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

bool isLucky(int n) {
	while (n) {
		if (n % 10 != 4 && n % 10 != 7) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}


void solve() {
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++) {
		if (isLucky(i) && n % i == 0) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
