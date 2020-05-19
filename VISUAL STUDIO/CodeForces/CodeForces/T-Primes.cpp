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

bool isPrime(ll n) {
	if (n <= 1) {
		return 0;
	}
	if (n <= 3) {
		return 1;
	}
	if (n % 2 == 0 || n % 3 == 0) {
		return 0;
	}
	for (ll i = 5; i * i <= n; i += 6) { // all primes have a diff of 6 or is shifted over by 2
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}


void solve() {
	ll n;
	cin >> n;
	if (sqrt(n) == ll(sqrt(n)) && isPrime(sqrt(n))) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
