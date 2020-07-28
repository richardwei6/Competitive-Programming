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

char next(char s) {
	return (char)(((s - 'a') + 1) % 26 + 'a');
}

void solve() {
	int n;
	cin >> n;
	string s = "";
	V<int> a(n);
	int mx = 0, mxC = 0;
	for (int& i : a) {
		cin >> i;
		if (i > mx) {
			mx = i;
			mxC = 1;
		}
		else if (i == mx) {
			mxC++;
		}
	}
	if (a[0] == 0) {
		s = string(max(mx, 1), 'a');
	}
	else {
		s = string(a[0], 'a');
		s += string(mx - a[0], 'b');
	}
	for (int i = 0; i < n; i++) {
		string t = s;
		if (a[i] != mx || mxC > 1 || a.size() == 1) {
			t[a[i]] = next(t[a[i]]);
		}
		cout << s << endl;
		s = t;
	}
	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
