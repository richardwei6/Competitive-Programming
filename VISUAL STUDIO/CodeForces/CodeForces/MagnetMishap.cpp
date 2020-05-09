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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

bool valid(string s) {
	bool f = 0;
	for (auto i : s) {
		if (i == 'N') {
			f = 1;
		}
		if (i == 'S' && f == 1) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	string s;
	cin >> s;
	int c = 0;
//	cout << valid(s) << endl;
	while (!valid(s)) {
		for (int i = 0; i+1 < s.size(); i++) {
			if (s[i] == 'N'&&s[i+1] !='N') {
				swap(s[i], s[i + 1]);
				break;
			}
		}
	//	cout << s << endl;
		c++;
	}
	cout << c << endl;
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
