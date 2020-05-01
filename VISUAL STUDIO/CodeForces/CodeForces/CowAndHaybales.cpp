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
	int n, d;
	cin >> n >> d;
	vector<int> h;
	for (; n--;) {
		int t;
		cin >> t;
		h.push_back(t);
	}
	for (int i = 1; i < h.size() && d >= 0; i++) {
		if (d - (h[i]*i) >= 0) { // move  entire barrel
			h[0] += h[i];
			d -= (h[i] * i);
			h[i] = 0;
		}
		else { // move one by one
			while (d-i>=0) {
				h[0]++;
				h[i]--;
				d -= i;
			}
		}
	}
	cout << h[0] << endl;
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
