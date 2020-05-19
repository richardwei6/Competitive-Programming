
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
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

double circleA(ll r) {
	return r * r * pi;
}

void solve() {
	int n;
	cin >> n;
	V<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(IT(a), greater<int>());
	double sum = 0;
	for (int i = 1; i < n; ) {
		sum += circleA(a[i - 1]) - circleA(a[i]);
		i += 2;
	}
	if (a.size() % 2) { // last one
		sum += circleA(a[a.size() - 1]);
	}
	cout << setprecision(10) << sum << endl;
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
