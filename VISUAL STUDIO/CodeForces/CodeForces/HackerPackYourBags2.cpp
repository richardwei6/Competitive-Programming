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
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
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

const int maxn = 200500;
const int inf = ( 2e9 ) + 2;

vector < pair < pair < int, int >, pair < int, int > > > queries;
int bestCost[maxn];

int l[maxn];
int r[maxn];
int cost[maxn];

int solution( int n, int needLen ) {
    queries.clear();
    for ( int j = 0; j < n; j++ ) {
        queries.PS( make_pair( make_pair( l[j], -1 ), make_pair( r[j], cost[j] ) ) );
        queries.PS( make_pair( make_pair( r[j], 1 ), make_pair( l[j], cost[j] ) ) );
    }
    for ( int j = 0; j < maxn; j++ )
        bestCost[j] = inf;
    ll ans = 2LL * inf;
    sort( queries.begin(), queries.end() );
    int sz = queries.size();
    for ( int j = 0; j < sz; j++ ) {
        int type = queries[j].first.second;
        if ( type == -1 ) {
            int curLen = queries[j].second.first - queries[j].first.first + 1;
            if ( curLen <= needLen )
                ans = min( ans, 1LL * queries[j].second.second + 1LL * bestCost[needLen - curLen] );
        }
        if ( type == 1 ) {
            int curLen = queries[j].first.first - queries[j].second.first + 1;
            bestCost[curLen] = min( bestCost[curLen], queries[j].second.second );
        }
    }
    return ans >= inf ? -1 : ans;
}

void solve() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> cost[i];
    }
    cout << solution(n, x) << endl;
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
