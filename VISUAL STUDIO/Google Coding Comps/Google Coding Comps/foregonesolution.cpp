


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

int fourPos(int n) { // returns
	int a = 0;
	while (n) {
		if (n % 10 == 4) {
			return a;
		}
		n /= 10;
		a++;
	}
	return -1;
}


void solve() {
	int n, b = 0;
	cin >> n;
//	cout << "four detected at " << pow(10,fourPos(n)) << " th pos" << endl;
	while (1) {
		while (fourPos(n) != -1) {
			int a = pow(10, fourPos(n));
			n -= a;
			b += a;
		}
		while (fourPos(b) != -1) {
			n++;
			b--;
		}
		if (fourPos(n) == -1 && fourPos(b) == -1) {
			break;
		}
	}
	cout << n << " " << b << endl;
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


/**/
