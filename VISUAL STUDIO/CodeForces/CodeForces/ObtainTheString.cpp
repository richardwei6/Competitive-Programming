
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


void solve() {
	int n;
	cin >> n;
	int a[26]{}, b[26]{};
	string x, y;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		a[c - 'a']++;
		x += c;
	}
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		b[c - 'a']++;
		y += c;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] != b[i]) {
			cout << -1 << endl;
			return;
		}
	}
	V<int> m; // moves
	for (int i = 0; i < n; i++) {
		while (x[i] != y[i]) {
			//cout << " ----- conflict - " << x[i] << "!=" << y[i] <<endl;
			int p = x.find(y[i], i);
			m.PS(p);
			swap(x[p], x[p - 1]);
			}
	}
	cout << m.size() << endl;
	for (int i : m) {
		cout << i << " ";
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
