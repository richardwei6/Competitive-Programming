

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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
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
	int n;
	cin >> n; // problem : find the amount of different separate graphs there are
	V<set<char>> g(26, set<char>());
	while (n--) {
		string m;
		cin >> m;
		set<char> a(IT(m));
		if (a.size() > 1) {
			for (char i : a) {
				if (g[i - 'a'].size()) {
					for (char j : g[i - 'a']) {
						a.insert(j);
					}
				}
			}
			for (char i : a) {
				g[i - 'a'] = a;
			}
		}
		else {
			g[m[0] - 'a'] = a;
		}
	}
	set<set<char>> t;
	for (int i = 0; i < 26; i++) {
		if (g[i].size()) {
			t.insert(g[i]);
		}
	}
	cout << t.size() << endl;
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
