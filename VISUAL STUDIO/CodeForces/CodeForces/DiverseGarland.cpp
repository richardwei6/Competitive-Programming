
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

int pos(char s) {
	if (s == 'R') {
		return 0;
	}
	else if (s == 'G') {
		return 1;
	}
	else {
		return 2;
	}
}

char fromPos(int i) {
	if (i == 0) {
		return 'R';
	}
	else if (i == 1) {
		return 'G';
	}
	else {
		return 'B';
	}
}

char notC(char s) {
	if (s == 'R') {
		return 'G';
	}
	else if (s == 'G') {
		return 'B';
	}
	else {
		return 'R';
	}
}

void solve() {
	int n, c = 0;
	cin >> n;
	string s;
	cin >> s;
	if (n == 2 && s[0] == s[1]) {
		s[1] = notC(s[1]);
		cout << 1 << endl;
		cout << s << endl;
		return;
	}
	for (int i = 2; i < n; i++) {
		if (s[i] == s[i - 1] && s[i - 1] == s[i - 2]) {
			s[i - 1] = notC(s[i - 1]);
			c++;
		}
	}
	for (int i = 1; i + 1 < n; i++) {
		if (s[i-1] == s[i] || s[i] == s[i+1]) {
			int a[3]{};
			a[pos(s[i - 1])] = 1;
			a[pos(s[i + 1])] = 1;
			for (int j = 0; j < 3; j++) {
				if (a[j] == 0) {
					c++;
					s[i] = fromPos(j);
					break;
				}
			}
		}
	}
	cout << c << endl;
	cout << s << endl;
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
