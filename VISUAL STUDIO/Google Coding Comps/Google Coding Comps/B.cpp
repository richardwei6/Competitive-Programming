
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
#define dq deque
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;
#define INT_MAX 2147483647
#define INT_MIN -2147483647

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

bool isValid(dq<int> a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i]%2 == i%2) {
			return 0;
		}
	}
	return 1;
}

ll arrayToInt(dq<int> a) {
	ll n = 0;
	for (ll i = 0; i < a.size(); i++) {
		n *= 10;
		n += a[i];
	}
	return n;
}

void increment(dq<int>& a, int i) {
//	cout << "increment at - " << i << endl;
	a[i]++;
//	cout << "incremented " << a[i] << endl;
	if (a[i] == 10) {
		a[i] = 0;
		if (i == 0) {
			a.push_front(1);
		}
		else {
			increment(a, i - 1);
		}
	}
}

void solve() {
	ll l, r, c = 0;
	cin >> l >> r;
	dq<int> a;
	while (l) {
		a.push_front(l % 10);
		l /= 10;
	}
//	D(a);
	while (1) {
		bool f = 0;
		for (int i = 0; i < a.size(); i++) {
			if (!f) {
				if (a[i] % 2 == i % 2) {
					//cout << "not valid" << endl;
					increment(a, i);
					f = 1;
				}
			}
			else {
				a[i] = 0;
			}
		}
		if (arrayToInt(a) <= r) {
			if (isValid(a)) {
				//cout << "valid" << endl;
				increment(a, a.size() - 1);
				c++;
			}
		}
		else {
			break;
		}
		D(a);
//		cout << arrayToInt(a) << endl;
	}
	cout << c << endl;
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
