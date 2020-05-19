

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
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

 // pos alg - maintain a multiset or map of all passed numbers - check for each number to see if a previous number thats a creates a square with the current num
void solve() {
	ll n, c = 0;
	cin >> n;
	unordered_map<ll, int> a; // sum array lookup
	ll s = 0, mx = 0; // curr sum and max sum
	V<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		mx += b[i];
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ---- " << endl;
		s += b[i];
		for (int j = 0; j * j <= mx; j++) { // for each square	
			if (a[s - (j * j)] != 0) {
				c += a[s - (j * j)];
			}
		}
		a[s]++;
	}
	cout << "ans - "<< c << endl;
}

/*
bool perfect(ll n) {
	return n >= 0 && sqrt(n) == (ll)sqrt(n);
}

void solve() { // pos alg - maintain a multiset or map of all passed numbers - check for each number to see if a previous number thats a creates a square with the current num
	ll n, c = 0;
	cin >> n;
	V<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll dp[100001]{};
	for (ll i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + a[i - 1];
		c += perfect(a[i-1]);
	}
	for (ll i = 2; i <= n; i++) { // starting
		for (ll j = i - 2; j >= 0; j--) {
			if (perfect(dp[i] - dp[j])) {
				c++;
			}
		}
	}
	cout << c << endl;
}*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}


/**/
