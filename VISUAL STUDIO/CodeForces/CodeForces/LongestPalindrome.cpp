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

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

bool isPalindrome(string s) {
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size()-1-i]) {
			return 0;
		}
	}
	return 1;
}

string makePalindrome(string s) {
	string o = "";
	for (int i = s.size() - 1; i > -1; i--) {
		o += s[i];
	}
	return o;
}

void solve() {
	int n, m;
	cin >> n >> m;
	map<string, int> a;
	for (int i = 0; i < n; i++) {
		string t;
		cin >> t;
		a[t]++;
	}
	string mid = "", c = "";
	for (auto& i : a) {
		if (i.second > 0) {
			string t = i.first;
			reverse(IT(t));
			if (t != i.first) {
				int mn = min(i.second, a[t]);
				for (int j = 0; j < mn; j++) {
					c += i.first;
				}
				i.second -= mn;
				a[t] -= mn;
			}
			else {
				for (int j = 0; j < i.second / 2; j++) {
					c += i.first;
				}
				i.second %= 2;
			}
		}
	}
	for (auto i : a) {
		if (isPalindrome(i.first)) {
			mid = i.first;
			break;
		}
	}
	//cout << c << " = " << mid << endl;
	cout << (c.size() * 2) + mid.size() << endl;
	cout << c + mid + makePalindrome(c) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
