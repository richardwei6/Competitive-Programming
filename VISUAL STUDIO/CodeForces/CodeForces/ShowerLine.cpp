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
#define dq deque
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
	int g[5][5]{};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> g[i][j];
		}
	}
	V<int> p = { 0, 1, 2, 3, 4 };
	int mx = 0;
	do {
		dq<int> t(IT(p));
		int x = 0;
		while (t.size() > 1) {
			for (int i = 1; i < t.size(); i += 2) {
				x += g[t[i]][t[i - 1]] + g[t[i - 1]][t[i]];
			}
			t.pop_front();
		}
	//	cout << "x - " << x << " = ";
	//	D(p);
		mx = max(mx, x);
	} while (next_permutation(IT(p)));
	cout << mx << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
