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
#define dq deque
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

string m = "abacaba";

int count(string s) {
	int c = 0;
	for (size_t pos = s.find(m); pos != string::npos; pos = s.find(m, pos)) {
		c++;
		pos++;
	}
	return c;
}


void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i + m.size() - 1 < n; i++) {
		if (s[i] == 'a' || s[i] == '?') {
			string t = s;
			bool f = 1;
			for (int j = 0; j < m.size(); j++) {
				if (t[i+j] != m[j] && t[i+j] != '?') {
				//	cout << t[i + j] << " = " << i + j << endl;
					f = 0;
					break;
				}
				else {
					t[i + j] = m[j];
				}
			}
			if (f == 1 && count(t) == 1) {
				YES;
				for (int j = 0; j < t.size(); j++) {
					if (t[j] == '?') {
						t[j] = 'x';
					}
				}
				cout << t << endl;
				return;
			}

		}
	}
	NO;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
