/*#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
using namespace std;

void solve(vector<int> p) {
	int c = 0;
	for (int i = 1; i < p.size() - 1; i++) {
		if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
			c++;
		}
	}
	cout << c << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		vector<int> p;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int m;
			cin >> m;
			p.push_back(m);
		}
		cout << "Case #" << i << ": ";
		solve(p);
	}
	return 0;
}*/