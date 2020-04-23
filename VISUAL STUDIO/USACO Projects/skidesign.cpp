/*
ID: richard154
PROG: skidesign
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
/*
int main() {
	ios_base::sync_with_stdio(false);
	ofstream fout("skidesign.out");
	ifstream fin("skidesign.in");
	vector<int> h; // hills
	int t;
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		h.push_back(n);
	}

	long long minCost = 9999999;

	for (int i = 17; i <= 100; i++) {
		long long currentCost = 0;
		for (int n : h) {
			if (n > i || n < i - 17) { // not in range
				int j = min(abs(n - (i - 17)), abs(n - i));
				currentCost += j*j;
			}
		}
		minCost = min(currentCost, minCost);
	}
	
	fout << minCost << endl;

	return 0;
}

*/