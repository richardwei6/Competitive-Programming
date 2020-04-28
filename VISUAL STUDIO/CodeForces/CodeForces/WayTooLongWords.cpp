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
	string s;
	cin >> s;
	if (s.size() > 10) {
		cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
	}
	else {
		cout << s << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (; n--;) {
		solve();
	}
	return 0;
}


/**/
