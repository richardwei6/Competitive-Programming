
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
	string s;
	cin >> s;
	int a[26]{};
	for (char i : s) {
		a[i - 'A']++;
	}
	bool once = 0;
	string t;
	for (int i = 0; i < 26; i++) {
		if (a[i] % 2 != 0) {
			if (once) {
				cout << "NO SOLUTION" << endl;
				return;
			}
			else {
				t = char(i + 'A');
				once = 1;
				a[i]--;
			}
		}
	}
	string o = "";
	for (int i = 0; i < 26; i++) {
		if (a[i]) {
			string p(a[i] / 2, char(i + 'A'));
			o += p;
			o.insert(0, p);
		}
	}
	if (once) {
		o.insert(size_t(o.size() / 2), t);
	}
	cout << o << endl;
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
