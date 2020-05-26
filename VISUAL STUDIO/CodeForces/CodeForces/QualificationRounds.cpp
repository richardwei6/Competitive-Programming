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

void solve() { // columns are teams
	int n, k, m[16]{};
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> t;
			c = (c << 1) | t; // convert binary to number
		}
		m[c] = 1; // sets the problem bitwise combination as a possibility
	}
	for (int a = 0; a < (1 << k); a++) { // every single combination
		for (int b = a; b < (1 << k); b++) { // every single combination 
			if (((a & b) == 0) && m[a] && m[b]) {  // & compares each binary bit of a and b - are not corresponding and problems a and b have to be a valid problem described before ^
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
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
