
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


void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s[n-1] == 0) {
		cout << 0 << endl;
	}
	else {
		int i = n - 1, j = 0; // right most zero and left most one
		for (; i > -1 && s[i] != '0'; i--);
		for (; j < n && s[j] != '1'; j++);
		if (j > i) {
			// none exists
			cout << s << endl;
		}
		else {
		//	cout << j << " - " << i << endl;
			for (int x = 0; x < n; x++) {
				if (x == j) {
					cout << "0";
					x = i;
				}
				else {
					cout << s[x];
				}
			}
			cout << endl;
		}
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
