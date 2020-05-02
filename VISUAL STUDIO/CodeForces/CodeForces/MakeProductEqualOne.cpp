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
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		a.push_back(j);
	}
	ll s = 0, neg = 0, z = 0; // sum of all moves and num of negative numbers
	for (int& i : a) {
		if (i > 1) {
			s += i - 1;
		}
		else if (i < -1) {
			s += abs(i + 1);
			neg++;
		}
		else { // i == 0
			if (i == 0) {
				z++;
			}
			if (i == -1) {
				neg++;
			}
		}
	}
	if (neg % 2 == 0 || z > 0) {
		cout << s + z << endl;
	}
	else { // no zeros and uneven num of negative digits
		cout << s + z + 2 << endl;
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
