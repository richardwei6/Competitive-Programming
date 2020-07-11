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

char diff(char a, char b) {
	int t = a - 'a';
	int x = b - 'a';
	if ((t + 1)%26 != x) {
		return (char)((t + 1) % 26 + 'a');
	}
	else {
		return (char)((t + 2) % 26 + 'a');
	}
}

bool valid(string k, string a, string b, int d) {
	int x = 0, y = 0;
	for (int i = 0; i < k.size(); i++) {
		x += a[i] != k[i];
		y += b[i] != k[i];
	}
	return d == x && x == y;
}

void solve() {
	ll k, n, t, t1, t2;
	cin >> n >> t;
	string s1, s2, a;
	cin >> s1 >> s2;
	k = n;
	t1 = t2 = n - t;
	for (int i = 0; i < n; i++) {
		a.PS('.');
	}
	for (int i = 0; i < n && t1 > 0 && t2 > 0; i++) {
		if (s1[i] == s2[i]) {
			a[i] = s1[i];
			t1--;
			t2--;
			k--;
		}
	}
	for (int i = 0; t1 && k; i++) {
		if (a[i] == '.') {
			a[i] = s1[i];
			t1--;
			k--;
		}
	}
	for (int i = 0; t2 && k; i++) {
		if (a[i] == '.'){
			a[i] = s2[i];
			t2--;
			k--;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == '.' && k) {
			a[i] = diff(s1[i], s2[i]);
		}
	}
	if (valid(a, s1, s2, t)) {
		cout << a << endl;
	}
	else {
		cout << -1 << endl;
	}
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
