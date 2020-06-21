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

V<V<int>> l, g;
V<int> p;

void dfs(int x) { // dfs people is x
	p[x] = 1;
	for (int i : g[x]) { // languages this person knows
		for (int j : l[i]) { // others who know this language
			if (p[j] == 0) {
				dfs(j);
			}
		}
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	p = V<int>(n); // visited people
	l = V<V<int>>(m, V<int>()); // languages to people
	g = V<V<int>>(n, V<int>()); // people to language
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int m;
			cin >> m;
			l[m-1].PS(i);
			g[i].PS(m - 1);
		}
	}
	bool f = 1;
	for (int i = 0; i < n; i++){ // edge case 
		if (g[i].size() > 0) {
			f = 0;
			break;
		}
	}
	if (f) {
		cout << n << endl;
		return;
	}
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] == 0) {
			dfs(i);
			c++;
		}
	}
	cout << c-1 << endl;
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
