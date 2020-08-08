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
	string s;
	cin >> s;
	int c = 4;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '?'){
			int a[3]{};
			if (i + 1 < s.size()) {
				a[s[i + 1] - 'a'] = 1;
			}
			if (i - 1 > -1) {
				a[s[i - 1] - 'a'] = 1;
			}
			for (int j = 0; j < 3; j++) {
				if (a[j] == 0) {
					s[i] = j + 'a';
					break;
				}
			}
		}	
	}
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i-1] || s[i-1] == '?') {
			cout << -1 << endl;
			return;
		}
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
