#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
using namespace std;

/*long long largest(vector<long long> x, long long p, long long d) {
	long long s = x[p];
	for (long long j = 1; x[p] * j <= d; j++) {
		s = j * x[p];
	}
	return s;
}*/

void solve(vector<long long> x, long long d) {
	for (long long i = x.size() - 1; i > -1; i--) {
		while (d % x[i] != 0) {
			d--;
		}
	}
	cout << d << endl;
}


int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		long long n, d;
		cin >> n >> d;
		vector<long long> x;
		for (int j = 0; j < n; j++) {
			int p;
			cin >> p;
			x.push_back(p);
		}
		cout << "Case #" << i << ": ";
		solve(x, d);
	}
	return 0;
}
