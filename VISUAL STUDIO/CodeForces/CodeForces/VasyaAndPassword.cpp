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

V<int> get(string s) {
	int num = 0, upper = 0, lower = 0;
	for (char i : s) {
		if (isalpha(i)) {
			if (isupper(i)) {
				upper++;
			}
			else {
				lower++;
			}
		}
		else {
			num++;
		}
	}
	return {num, upper, lower};
}

int type(char t) {
	if (isalpha(t)) {
		if (isupper(t)) {
			return 1;
		}
		else {
			return 2;
		}
	}
	else {
		return 0;
	}
}

char getTypeChar(int t) {
	return t == 0 ? '1' : t == 1 ? 'A' : 'a';
}

void solve() {
	string s;
	cin >> s;
	for (V<int> g = get(s); g[0] == 0 || g[1] == 0 || g[2] == 0; g = get(s)) {
		int t = 0;
		for (int i = 0; i < 3; i++) {
			if (g[i] == 0) {
				t = i;
				break;
			}
		}
		for (char& i : s) {
			if (type(i) != t && g[type(i)] > 1) {
				i = getTypeChar(t);
				break;
			}
		}
	}
	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/\
