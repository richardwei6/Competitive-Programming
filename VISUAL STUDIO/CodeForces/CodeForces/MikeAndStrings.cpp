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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

int diff(string a, string b) {  // a is selected
	int c = 0;
	while (a != b) {
	//	cout << a << " - " << b << endl;
		if (c > b.size()) {
			return -1;
		}
		char n = b[0];
		b.erase(begin(b));
		b += n;
		c++;
	}
	return c;
}

void solve() {
	int n;
	cin >> n;
	vector<string> a;
	set<set<char>> c;
	while (n--) {
		string s;
		cin >> s;
		a.push_back(s);
		c.insert(set<char>(begin(s),end(s)));
	}
//	cout << diff(a[0], a[1]) << endl;
	if (c.size() == 1) {
		int mn = INT_MAX;
		for (int i = 0; i < a.size(); i++) { // selected
			int c = 0;
			for (int j = 0; j < a.size(); j++) {
				if (i != j) {
					int d = diff(a[i], a[j]);
					if (d != -1) {
						c += diff(a[i], a[j]);
					}
					else {
						cout << -1 << endl;
						return;
					}
				}
			}		
			mn = min(mn, c);
		}
		cout << mn << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
