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

void solve() {
	int n, k;
	cin >> n >> k;
	string ans;
	map<int, V<string>> a; // size is key
	for (int i = 0; i < n; i++) {
		string t;
		cin >> t;
		a[t.size()].PS(t);
	}
	cin >> ans;
	int prevPc = 0; // num of previous passwords
	for (int i = ans.size() - 1; i > 0; i--) {
		prevPc += a[i].size();
	}
	int best = prevPc + 1;
	int worst = prevPc + a[ans.size()].size();

	cout << best + 5*((best-1)/k) << " " << worst + 5*((worst-1)/k) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
//hile (t--)
		solve();
	return 0;
}


/**/
