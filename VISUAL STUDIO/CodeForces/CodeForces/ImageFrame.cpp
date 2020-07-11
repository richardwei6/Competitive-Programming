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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

V<string> a;

bool isRect(int i, int j, int t, int l) { // t is left corner l is right corner
	char o = a[i][t];
	for (int k = i; k <= j; k++) {
		if (a[k][t] != o || a[k][l] != o) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	int n, m;
	cin >> n >> m;
	a = V<string>(n);
	for (string& i : a) {
		cin >> i;
	}
	for (int i = 0; i+1 < n; i++) {
		for (int j = i + 1; j < n; j++) {

			string x = a[i], y = a[j];
			for (int t = 0; t+1 < m;) { // main char
				//cout << "main char - " << a[i][t] << endl;
				int l = t + 1;
				for (; l < m && a[j][l] == a[i][t] && a[i][l] == a[i][t]; l++) { // secondary
				//	cout << "secondary char - " << a[i][l] << endl;
					if (isRect(i, j, t, l)) {
						cout << "YES" << endl;
						return;
					}
				}
				t = l;
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
