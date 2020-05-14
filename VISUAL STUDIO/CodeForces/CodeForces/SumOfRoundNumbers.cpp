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
#define PS(x) emplace_back(x)

void solve() {
	int n;
	cin >> n;
	vector<int> a;
	while (n) {
		if (n%10)
			a.push_back(n % 10);
		else {
			a.push_back(0);
		}
		n /= 10;
	}
	int t = 0;
	for (auto i : a) {
		if (i) {
			t++;
		}
	}
	cout << t << endl;
	int d = 1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != 0) {
			cout << a[i] * d;
			if (i + 1 != a.size()) {
				cout << " ";
			}
		}
		d *= 10;
	}
	cout << endl;
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
