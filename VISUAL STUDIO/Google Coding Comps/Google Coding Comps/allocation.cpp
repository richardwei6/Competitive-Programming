#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;
/*
void solve(int n, int b, multiset<int> a) { // cost of houses, number and budget
	vector<int> t(begin(a), end(a));
	int num = 0;
	for (int i = 0; i < t.size() && b; i++) {
		if (b - t[i] >= 0) {
			num++;
			b -= t[i];
		}
	}
	cout << num << endl;
}

int main() {
	int t;
	cin >> t;
	for (int j = 1; j <= t; j++) {
		multiset<int> a;
		int n, b;
		cin >> n >> b;
		for (int i = 0; i < n; i++) {
			int p;
			cin >> p;
			a.insert(p);
		}
		cout << "Case #" << j << ": ";
		solve(n, b, a);
	}
	return 0;
}
*/