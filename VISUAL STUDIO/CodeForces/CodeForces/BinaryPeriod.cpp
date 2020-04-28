
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

void solve() {
	string s, o;
	cin >> s;
	ll t = s.size();
	for (; t--;) {
		o += "10";
	}
	cout << (s.size() > 2?o:s) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (;t--;)
		solve();
	return 0;
}


/**/
