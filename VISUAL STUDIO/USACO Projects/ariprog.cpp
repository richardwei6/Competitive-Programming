/*
ID: richard154
PROG: ariprog
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;



int main() {

	ios_base::sync_with_stdio(false);
	//ofstream fout("ariprog.out");
	//ifstream fin("ariprog.in");

	int maxL, upper;
	cin >> maxL >> upper;
	
	int upperN = 2 * (upper * upper);

	vector<vector<int>> o; // answers

	set<int> t; // all nums

	for (int p = 0; p <= upper; p++) {
		for (int q = 0; q <= upper; q++) {
			t.insert((p * p) + (q * q));
		}
	}
	//cout << size(t) << endl;
	for (int n : t) { // starting - need to optimize
		if (n <= upperN-5) {
			for (int d = 1; n + (maxL - 1) * d <= upperN; d++) { // difference
				for (int j = 0; j < maxL; j++) { // generate arithmetic sequence
					if (t.count(n + (j * d)) == 0) {
						goto h;
					}
				}
				o.push_back({ n,d });
			h:;
			}
		}
	}


	sort(begin(o), end(o),
		[](vector<int> a, vector<int> b) {
		return a[1] < b[1];
	});


	if (o.size()) {
		for (auto i : o) {
			cout << i[0] << " " << i[1] << endl;
		}
	}
	else {
		cout << "NONE" << endl;
	}

	return 0;
}