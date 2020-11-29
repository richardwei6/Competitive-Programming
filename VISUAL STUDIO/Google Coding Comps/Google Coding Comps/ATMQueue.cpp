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
#define INT_MAX 2147483647
#define INT_MIN -2147483647

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i+1 << " ";
	cout << endl;
}
// 3 1 3
// 2 1 3
void solve() {
	ll n, m;
	cin >> n >> m;
	/*V<ll> a(n);
	for (auto& i : a) {
		cin >> i;
	}
	dq<ll> q(n);
	for (ll i = 0; i < n; i++) {
		q[i] = i;
	}
	V<ll> leave;
	for (;q.size() > 0;) {
		if(a[q.front()] > m) {
			a[q.front()] -= m;
			q.push_back(q.front());
		}
		else {
			leave.push_back(q.front());
		}
		q.pop_front();
	}
	D(leave);

	V<pair<ll,ll>> a(n);
	ll t = 1;
	for (auto& i : a) {
		cin >> i.first;
		i.second = t;
		t++;
	}
	for (auto& i : a) {
		i.first = (ll)ceil((ld)i.first / m);
	}
	sort(IT(a), [](pair<ll,ll> a, pair<ll,ll> b) {
		if (a.first == b.first) {
			return a.second < b.second;
		}
		else {
			return a.first < b.first;
		}
	});
	for (auto i : a) {
		cout << (i.second) << " ";
	}
	cout << endl;
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
