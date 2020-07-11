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
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int a[26]{};

bool match(string p, string s) {
	if (p.size() != s.size()) {
		return 0;
	}
	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '?') {
			if (a[s[i]  - 'a'] == 0) {
				return 0;
			}
		}
		else {
			if (p[i] != s[i]) {
				return 0;
			}
		}
	}
	return 1;
}

void solve() {
	int n;
	string g, p;
	cin >> g >> p;
	for (char i : g) {
		a[i - 'a'] = 1;
	}
	cin >> n;
	auto f = p.find('*');
	for (int l = 0; l < n; l++) {
		string s;
		cin >> s;
		if (s.size() < p.size()-1) {
			NO;
		}
		else if (f == string::npos) {
			BOOLO(match(p, s));
		}
		else {
			bool o = 1;
			o &= match(p.substr(0, f), s.substr(0, f));
			reverse(IT(p));
			reverse(IT(s));
			f = p.size() - f - 1;
			o &= match(p.substr(0, f), s.substr(0, f));
			reverse(IT(p));
			reverse(IT(s));
			f = p.size() - f - 1;
			for(int i = f; i < s.size() - (p.size() - f - 1); i++)
				o &= !a[ s[i] - 'a' ];
			cout << (o ? "YES" : "NO") << endl;
		}
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
