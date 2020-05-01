/*1
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
	int n, k;
	cin >> n >> k;
	deque<int> m;
	unordered_map<int, int> h;
	for (int t = 0; t < n; t++) {
		int j;
		cin >> j;
		if (h[j] == 0) {
			h[j] = 1;
			m.push_front(j);
		}
		if (m.size() > k) {
			h[m[m.size() - 1]] = 0;
			m.pop_back();
		}
	}
	cout << m.size() << endl;
	for (int i : m) {
		cout << i << " ";
	}
	cout << endl;

}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}
 
 
/**/
