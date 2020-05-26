
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

string divisibleBy8(string s) {
	if (stoi(s) % 8 == 0) {
		return s;
	}
	else {
		string t = { s[0],s[1] };
		if (stoi(t) % 8 == 0) {
			return t;
		}
		t = { s[1], s[2] };
		if (stoi(t) % 8 == 0) {
			return t;
		}
		t = { s[0], s[2] };
		if (stoi(t) % 8 == 0) {
			return t;
		}
	}
	return "-";
}

void solve() {
	string n;
	cin >> n;
	if (n.size() > 2) {
		for (int i = 0; i + 2 < n.size(); i++) {
			for (int j = i + 1; j + 1 < n.size(); j++) {
				for (int x = j + 1; x < n.size(); x++) {
					if (n[i] == '8' || n[j] == '8' || n[x] == '8') {
						cout << "YES" << endl;
						cout << 8 << endl;
						return;
					}
					if (n[i] == '0' || n[j] == '0' || n[x] == '0') {
						cout << "YES" << endl;
						cout << 0 << endl;
						return;
					}
					string t = divisibleBy8({ n[i],n[j],n[x] });
					if (t != "-") {
						cout << "YES" << endl;
						cout << t << endl;
						return;
					}
				}
			}
		}
	}
	else {
		if (stoi(n) % 8 == 0) {
			cout << "YES" << endl;
			cout << n << endl;
			return;
		}
		for (auto i : n) {
			if ((i-'0') % 8 == 0) {
				cout << "YES" << endl;
				cout << i << endl;
				return;
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
