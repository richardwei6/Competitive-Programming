/* ===

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
#define mod 1000000007

bool isPrime(int n) {
	if (n <= 1 || n % 2 ==0 || n % 3 == 0) {
		return 0;
	}
	if (n <= 3) {
		return 1;
	}
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}


int requestSum(int n) {
	cout << n << endl;
	cout.flush();
	int s;
	cin >> s;
	return s;
}

void solve() {
	int n;
	cin >> n;
	if (isPrime(n)) {
		if (requestSum(n) == n + 1) {
			cout << "-1 evil" << endl;
		}
		else {
			cout << "-1 odious" << endl;
		}
	}
	else {
		int big = requestSum(720720);
		V<int> evil;
		while (1) {

		}
	}
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
