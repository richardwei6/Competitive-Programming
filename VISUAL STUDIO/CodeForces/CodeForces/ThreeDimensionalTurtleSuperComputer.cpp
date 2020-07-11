
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

int n, m, k;

V<V<V<int>>> a;
bool check(int x, int y, int z){
	if (!a[x][y][z])
		return 0;
	if (a[x - 1][y][z] && a[x + 1][y][z])
		return 1;
	if (a[x - 1][y][z] && a[x][y + 1][z] && !a[x - 1][y + 1][z])
		return 1;
	if (a[x - 1][y][z] && a[x][y][z + 1] && !a[x - 1][y][z + 1])
		return 1;
	if (a[x][y - 1][z] && a[x + 1][y][z] && !a[x + 1][y - 1][z])
		return 1;
	if (a[x][y - 1][z] && a[x][y + 1][z])
		return 1;
	if (a[x][y - 1][z] && a[x][y][z + 1] && !a[x][y - 1][z + 1])
		return 1;
	if (a[x][y][z - 1] && a[x + 1][y][z] && !a[x + 1][y][z - 1])
		return 1;
	if (a[x][y][z - 1] && a[x][y + 1][z] && !a[x][y + 1][z - 1])
		return 1;
	if (a[x][y][z - 1] && a[x][y][z + 1])
		return 1;
	return 0;
}
void solve() {
	cin >> n >> m >> k;
	a = V<V<V<int>>>(n+2, V<V<int>>(m+2, V<int>(k+2)));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			string s;
			cin >> s;
			for (int z = 1; z <= k; z++) {
				a[i][j][z] = s[z - 1] - '0';
			}
		}
	}

	int c = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			for (int z = 1; z <= k; z++) {
				if (a[i][j][z] && check(i,j,z)) {
					c++;
				}
			}
		}
	}
	cout << c << endl;
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
