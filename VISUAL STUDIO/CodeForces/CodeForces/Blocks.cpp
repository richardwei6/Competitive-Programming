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

int change(string a) {
	for (int i = 2; i < a.size(); i++) {
		if (a[0] != a[i] && a[i] == a[i - 1]) {
			return i - 1;
		}
	}
	return -1;
}

char notChar(char s) {
	if (s == 'W') {
		return 'B';
	}
	else {
		return 'W';
	}
}

void solve() {
	int n;
	cin >> n;
	string t;
	cin >> t;
	V<int> p;
	string s = t;
	for (int i = 0; i + 1 < n; i++) {
		if (s[i] != 'W') {
			p.PS(i);
			s[i] = notChar(s[i]);
			s[i + 1] = notChar(s[i + 1]);
		}
	}
	if (s[s.size() - 1] == 'W') {
		cout << p.size() << endl;
		for (int i : p) {
			cout << i + 1 << " ";
		}
		cout << endl;
		return;
	}
	p.clear(); 
	s = t;
	for (int i = 0; i + 1 < n; i++) {
		if (s[i] != 'B') {
			p.PS(i);
			s[i] = notChar(s[i]);
			s[i + 1] = notChar(s[i + 1]);
		}
	}
	if (s[s.size() - 1] == 'B') {
		cout << p.size() << endl;
		for (int i : p) {
			cout << i + 1 << " ";
		}
		cout << endl;
	}
	else {
		cout << "-1" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
	//while (t--)
		solve();
	return 0;
}


/**/
