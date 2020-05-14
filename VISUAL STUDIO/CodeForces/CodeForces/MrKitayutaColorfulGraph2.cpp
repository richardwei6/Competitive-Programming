
/**
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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

#define mx 120

bool vis[mx]{};
int g[mx][mx]{};
vector<pp> adj[mx];

void dfs(int s, int color) {
	vis[s] = 1;
	for (pp e : adj[s]) {
		if (!vis[e.first] && e.second == color) {
			dfs(e.first, color);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, k, n, m, u, v, c;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> u >> v >> c;
		adj[u].push_back({ v,c });
		adj[v].push_back({ u,c });
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			memset(vis, 0, sizeof(vis));
			dfs(i, j);
				for (k = 1; k <= n; k++) {
				if (i != k && vis[k]) {
					g[i][k]++, g[k][i]++;
				}
			}
		}
	}

	int q;
	cin >> q;

	while (q--) {
		cin >> u >> v;
		cout << g[u][v] / 2 << endl;
	}

	return 0;
}


/**/
