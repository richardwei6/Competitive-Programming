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

bool isAmplifying(string s) {
	for (char i : s) {
		if (i != ' ') {
			return i == '#';
		}
	}
	return 0;
}

string removeSpace(string s) {
	string o = "";
	for (char i : s) {
		if (i != ' ') {
			o += i;
		}
	}
	return o;
}

void solve() { // ctrl z to end input
	V<string> s, o;
	string t;
	while (!cin.eof()) {
		getline(cin, t);
		s.PS(t);
	}
	t = "";
	bool p = 0;
	for (int i = 0; i < s.size() - 1; i++) {
		if (isAmplifying(s[i])) {
			if (p == 1) {
				cout << t << endl;
				t = "";
				p = 0;
			}
			cout << s[i] << endl;
		}
		else {
			t += removeSpace(s[i]);
			p = 1;
		}
	}
	if (p == 1) {
		cout << t << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
