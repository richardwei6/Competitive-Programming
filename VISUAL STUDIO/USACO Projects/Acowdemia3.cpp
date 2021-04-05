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
#define pp pair<int,int>
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

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

V<V<char>> a;
int n, m;

const V<pair<int, int>> aroundPair = { {1, 0} , {0, 1}, {-1, 0}, {0, -1} };

map<pair<pp, pp>, bool> met;

bool hasPairMet(int& x, int& y, int& cx, int& cy) {
	return met[{ {x, y}, { cx, cy }}] || met[{ {cx, cy}, { x, y }}];
}

bool withinBounds(int x, int y) {
	return x < n && x > -1 && y < m && y > -1;
}

void dfs(int x, int y) {
	
	const V<pp> pPair = { {-1, 0} , {0, -1} };

	for (auto i : pPair){
		
		int ax = x + i.first, ay = y + i.second;
		if (withinBounds(ax, ay) && a[ax][ay] == 'C') {
		
			int ox = x + abs(i.first), oy = y + abs(i.second);

			if (withinBounds(ox, oy) && a[ox][oy] == 'C') {

				if (!hasPairMet(ax, ay, ox, oy)) {

					met[{ {ax, ay}, { ox, oy }}] = true;
					a[x][y] = '.';

					return;

				}

			}
		
		}

	}

	V<pp> t;

	for (auto i : aroundPair) {
		int ax = x + i.first, ay = y + i.second;
		if (withinBounds(ax, ay) && a[ax][ay] == 'C') {
			t.PS({ ax, ay });
		}
	}

	for (int i = 0; i + 1 < t.size(); i++) {
		for (int j = i + 1; j < t.size(); j++) {
			
			if (!hasPairMet(t[i].first, t[i].second, t[j].first, t[j].second)) {

				met[{ {t[i].first, t[i].second}, {t[j].first, t[j].second} }] = true;
				a[x][y] = '.';

				return;
			}

		}
	}
}

void solve() {
	cin >> n >> m;
	a = V<V<char>>(n, V<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'G') {

				dfs(i, j);

			}
		}
	}

	cout << met.size() / 2 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
