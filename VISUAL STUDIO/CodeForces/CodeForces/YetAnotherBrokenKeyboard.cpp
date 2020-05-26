
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

ll stringComb(string s) {
	return (s.size() * (s.size() + 1)) / 2;
}

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int a[26]{};
	for (int i = 0; i < k; i++) {
		char t;
		cin >> t;
		a[t - 'a'] = 1;
	}
	string t;
	ll c = 0;
	for (int i = 0; i < s.size(); i++){
		if (a[s[i] - 'a'] == 0) {
			c += stringComb(t);
			t = "";
		}
		else {
			t += s[i];
		}
	}
	cout << c+stringComb(t)<< endl;
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
