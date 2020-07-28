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
	int n;
	cin >> n;
	V<int> a(n);
	V<char> o(n);
	map<int, V<int>> t;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		t[a[i]].PS(i);
	}
	V<int> reg, single, twice; // odd number of occurances for numbers
	for (auto i : t) {
		if (i.second.size() == 1) {
//			cout << "one - " << i.first << endl;
			single.PS(i.first);
		}
		else if (i.second.size() == 2) {
//			cout << "two - " << i.first << endl;
			twice.PS(i.first);
		}
		else {
//			cout << "reg - " << i.first << endl;
			reg.PS(i.first);
		}
	}
	if (single.size() % 2 == 0 || reg.size() >= 1) {
		YES;
		for (int i = 0, p = 0; i < single.size(); i++, p = 1 - p) {
			for (int j : t[single[i]]) {
				if (p == 0) {
					o[j] = 'A';
				}
				else {
					o[j] = 'B';
				}
			}
		}
		bool need = single.size() % 2;
//		cout << "need - " << need << endl;
		for (int i = 0; i < reg.size(); i++) {
			if (need) {
				V<int> cp = t[reg[i]];
				o[cp[0]] = 'B';
				for (int j = 1; j < cp.size(); j++) {
					o[cp[j]] = 'A';
				}
				need = 0;
			}
			else {
				for (int j : t[reg[i]]) {
					o[j] = 'B';
				}
			}
		}
		for (int i : twice) {
			for (int j : t[i]) {
				o[j] = 'A';
			}
		}
		for (char i : o) {
			cout << i;
		}
		cout << endl;
	}
	else {
		NO;
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
