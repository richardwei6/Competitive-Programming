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

void solve() {
	int n, k;
	cin >> n >> k;
	int o = n - (k - 1); //n - (k odd ones + 1)
	int e = n - (2 * (k - 1));
	if (o % 2 != 0 && o > 0) {
		cout << "YES" << endl;
		for (int i = 0; i < (k - 1); i++) {
			cout << 1 << " ";
		}
		cout << o << endl;
		return;
	}
	//int e = n - 2 * (k + 1); // n - (k even 2s + 1)
	else if (e % 2 == 0 && e > 0) {
		cout << "YES" << endl;
		for (int i = 0; i < (k - 1); i++) {
			cout << 2 << " ";
		}
		cout << e << endl;
		return;
	}
	cout << "NO" << endl;
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
