
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

string toColumnTitle(int n) {
	string t = "";
	while (n--) {
		t.insert(begin(t) ,char('A' + (n % 26)));
		n /= 26;
	}
	return t;
}

int columnToInt(string s) {
	int t = 0;
	for (auto i : s) {
		t = (t * 26) + (i - '@');
	}
	return t;
}


bool isParseFirst(string s) {
	bool n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]) && n) {
			return 0;
		}
		if (isdigit(s[i])) {
			n = 1;
		}
	}
	return 1;
}

void solve() {
	string s;
	cin >> s;
	int c = 0, r = 0;
	bool f = isParseFirst(s);
	if (f) { // parse first
		string t = "", n = "";
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i])) {
				t += s[i];
			}
			else {
				n += s[i];
			}
		}
		c = columnToInt(t), r = stoi(n);
	}
	else {
		string a = "", b = "";
		bool p = 0;
		for (int i = 1; i < s.size(); i++) {
			if (isalpha(s[i])) {
				p = 1;
				continue;
			}

			if (p) {
				b += s[i];
			}
			else {
				a += s[i];
			}
		}
		r = stoi(a), c = stoi(b);
	}
	if (f) {
		cout << "R" << r << "C" << c << endl;
	}
	else {
		cout << toColumnTitle(c) << r << endl;
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
