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
#include <bitset>
#include <iomanip>
#include <cstring>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define ld long double
#define ull unsigned long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int n[6] = { 4,8,15,16,23,42 };
bool used[51]{};

bool isValidN(int x) {
	for (int i = 0; i < 6; i++) {
		if (n[i] == x) {
			return 1;
		}
	}
	return 0;
}

void solve() {
	V<int> a(4);
	for (int i = 2; i <= 5; i++) {
		cout << "? " << 1 << " " << i << '\n';
		cout.flush();
		cin >> a[i - 2];
	}
	int t = -1;
	// find inital num
	for (int i = 0; i < 6; i++) { // for each number
		// check if is divisor of all numbers and the quotient is valid
		bool f = 1;
		for (int j = 0; j < 4; j++) {
			if ( !( a[j] % n[i] == 0 && isValidN(a[j] / n[i]) )) {
				f = 0;
				break;
			}
		}
		if (f) {
			t = n[i];
			break;
		}
	}
	used[t] = 1;
	int ans[5] = { t, 0, 0, 0, 0 };
	for (int i = 1; i < 5; i++) {
		ans[i] = a[i - 1] / t;
		used[ans[i]] = 1;
	}
	cout << "! ";
	for (int i = 0; i < 5; i++) {
		cout << ans[i] << " ";
	}
	// find last
	for (int i = 0; i < 6; i++) {
		if (used[n[i]] == 0) {
			cout << n[i];
			break;
		}
	}
	cout << endl;
	cout.flush();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
