
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


void solve() {
	int n, k;
	cin >> n >> k;
	int h = n / 2;
	V<int> t(n);
	for (int& i : t) {
		cin >> i;
	}
	V<int> cnt(2 * k + 1);
	for (int i = 0; i < h; i++) {
		cnt[t[i] + t[n - i - 1]]++;
	}
	V<int> p(2 * k + 2);
	for (int i = 0; i < h; i++) {
		int l1 = 1 + t[i], r1 = k + t[i];
		int l2 = 1 + t[n - i - 1], r2 = k + t[n - i - 1];
		if (max(l1, l2) <= min(r1, r2)) {
			p[min(l1, l2)]++;
			p[max(r1, r2) + 1]--;
		}
	}
	for (int i = 1; i <= 2 * k + 1; i++) {
		p[i] += p[i - 1];
	}
	int a = INT_MAX;
	for (int s = 2; s <= 2 * k; s++) {
		a = min(a, (p[s] - cnt[s]) + 2 * (h - p[s]));
	}
	cout << a << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
