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
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	V<pair<int,int>> s(n);
	for (pair<int, int>& i : s) {
		cin >> i.first >> i.second;
		if (i.first > i.second) {
			swap(i.first, i.second);
		}
	}
	int mx = 0;
	for (int i = 0; i+1 < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (s[i].first + s[j].first <= a && max(s[i].second, s[j].second) <= b)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].second + s[j].second <= a && max(s[i].first, s[j].first) <= b)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].first + s[j].second <= a && max(s[i].second, s[j].first) <= b)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].second + s[j].first <= a && max(s[i].first, s[j].second) <= b)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].first + s[j].first <= b && max(s[i].second, s[j].second) <= a)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].second + s[j].second <= b && max(s[i].first, s[j].first) <= a)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].first + s[j].second <= b && max(s[i].second, s[j].first) <= a)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);

			if (s[i].second + s[j].first <= b && max(s[i].first, s[j].second) <= a)
				mx = max(mx, s[i].first * s[i].second + s[j].first * s[j].second);
		}
	}
	cout << mx << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
