
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
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

void solve() {
	V<string> t(4);
	for (int i = 0; i < 4; i++) {
		cin >> t[i];
	}
	V<pair<string, char>> a;
	for (string& i : t) {
		char n = i[0];
		i.erase(0, 2);
		a.push_back({ i, n });
	}
	set<char> ans;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			if (i != j) {
				if (!(a[i].first.size() <= (double)a[j].first.size() / 2)) {
					goto h1;
				}
			}
		}
		ans.insert(a[i].second);
		h1:;

		for (int j = 0; j < a.size(); j++) {
			if (i != j) {
				if (!(a[i].first.size() >= a[j].first.size() * 2)) {
					goto h;
				}
			}
		}
		ans.insert(a[i].second);
		h:;
	}
	cout << (ans.size()==1?*begin(ans):'C')<< endl;
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
