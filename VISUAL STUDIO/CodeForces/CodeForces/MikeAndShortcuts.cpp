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

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int d[1 << 20]{}, s[1 << 20]{};
queue<int> q;
void g(int k, int v) {
	if (d[k]) {
		return;
	}
	d[k] = v;
	q.push(k);
}

void solve() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> s[i];
	}
	g(1, 1);
	while (q.empty() == 0) {
		int n = q.front();
		q.pop();
		g(s[n], d[n] + 1);
		if (n > 1) {
			g(n - 1, d[n] + 1);
		}
		if (n < t){
			g(n + 1, d[n] + 1);
		}
	}
	for (int i = 1; i <= t; i++) {
		cout << d[i] - 1 << " ";
	}
	cout << endl;

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
