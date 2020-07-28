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
	int x, y, z;
	cin >> x >> y >> z;
	int a[26]{};
	a['R' - 'A'] = x;
	a['P' - 'A'] = y;
	a['S' - 'A'] = z;
	map<char, char> rps = { {'R','P'}, {'P', 'S'}, {'S', 'R'} };
	string s, o(n, '-');
	cin >> s;
	int w = ceil((double)n / 2), c = 0;
	for (int i = 0; i < n; i++) {
		if (a[rps[s[i]] - 'A'] > 0) {
			a[rps[s[i]] - 'A']--;
			o[i] = rps[s[i]];
			c++;
		}
	}
//	cout << w << " " << c << endl;
	if (c >= w) {
		YES;
		int p = 15;
		for (int i = 0; i < n; i++) {
			if (o[i] == '-') {
				while (a[p] == 0) {
					p++;
				}
				a[p]--;
				o[i] = (char)(p + 'A');
			}
		}
		cout << o << endl;
	}
	else {
		NO;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
