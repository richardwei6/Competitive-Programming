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
#define ld long double
#define ull unsigned long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int binary(string s) {
	if (s == "0000") {
		return 8;
	}
	int ans = 0;
	for (int i = s.size() - 1, m = 0; i > -1; i--, m++) {
		ans += s[i] == '1' ? pow(2, m) : 0;
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	string b = "";
	for (int i = 0; i < n; i++) {
		b += "1001";
	}
	string t;
	for (int i = 0; i < b.size() - n; i++) {
		t += b[i];
	}
	for (int i = 0; i < n; i++) {
		t += '0';
	}
	for (int i = 0; i < t.size(); i += 4) {
		cout << binary(t.substr(i, 4));
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
