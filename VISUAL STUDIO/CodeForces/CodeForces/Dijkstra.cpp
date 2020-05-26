
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



typedef     pair<int,int>       ii;

const int MAXN = 1e5 + 3;
const int INF = INT_MAX;

vector<vector<ii> > adjList;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t)
{
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    fill(dist, dist+n+1, INF);

    pq.push(ii(0, s));
    dist[s] = 0;
    par[s] = -1;

    while(!pq.empty()) {
        int u = pq.top().second; pq.pop();

        if(u == t) return true;

        isDone[u] = true;

        for(auto &pr : adjList[u]) {
            int v = pr.first, w = pr.second;

            if(!isDone[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push(ii(dist[v], v));
                par[v] = u;
            }
        }
    }

    return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int m;
	cin >> n >> m;

    adjList.resize(n+3);

    int u, v, w;

    while(m--) {
		cin >> u >> v >> w;
		adjList[u].push_back(ii(v, w));
        adjList[v].push_back(ii(u, w));
    }

    if(dijkstra(1, n)) {
        vector<int> path;

        for(v = n; v != -1; v = par[v]) path.push_back(v);

		for (int i = path.size() - 1; i > -1; i--) {
			cout << path[i] << " ";
		}
		cout << endl;

    }
	else {
		cout << -1 << endl;
	}

    return 0;
}

// ---------------------------------------

/*
pair<int, V<int>> d[100001];
bool visited[100001]{};

void solve() {

	int n, m;
	cin >> n >> m;
	V<V<int>> g(n, V<int>(n, 0));
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		g[a-1][b-1] = c;
		g[b-1][a-1] = c;
	}
	// dijkstras
	for (int i = 0; i < n; i++) {
		d[i] = { INT_MAX,{} };
	}
	d[0].first = 0;
	for (int c = 0; c < n - 1; c++) {
		// find minimum
		int mn = INT_MAX, u;
		for (int v = 0; v < n; v++) {
			if (visited[v] == 0 && d[v].first <= mn) {
				mn = d[v].first;
				u = v;
			}
		}

		visited[u] = 1;

		for (int i = 0; i < n; i++) {
			if (visited[i] == 0 && g[u][i] && d[u].first != INT_MAX && d[u].first + g[u][i] < d[i].first) {
				d[i].first = d[u].first + g[u][i];
				d[i].second = d[u].second;
				d[i].second.PS(u);
			}
		}
	}
	if (d[n - 1].second.size()) {
		for (int i : d[n - 1].second) {
			cout << i+1 << " ";
		}
		cout << n << endl;
	}
	else{
		cout << -1 << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
