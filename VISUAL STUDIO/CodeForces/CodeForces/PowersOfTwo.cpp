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

void D(dq<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


ll bigPow(ll x, ll n) {
	if (n < 0) {
		return bigPow(1 / x, -n);
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x), n / 2);
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x), (n - 1) / 2));
	}
}


void solve() {// max 30 size bitset
	int n, k;
	cin >> n >> k;
	bitset<30> b(n);
	dq<int> a;
	for (int i = 0; i < 30; i++) {
		if (b[i] == 1) {
	//		cout << i << endl;
			a.PS(bigPow(2, i));
		}
	}
	if (a.size() > k) {
		NO;
	}
	else {
		sort(IT(a));
		while (a.size() < k) {
			if (a.back() == 1) {
				sort(IT(a));
			}
			int t = a.back();
			if (t == 1) {
				NO;
				return;
			}
			a.pop_back();
			a.push_front(t / 2);
			a.push_front(t / 2);
		}
		YES;
		D(a);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
