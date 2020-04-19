/*
ID: richard154
PROG: milk
LANG: C++
*/
/*
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
	ofstream fout("milk.out");
	ifstream fin("milk.in");
	int total, t;
	fin >> total >> t;

	int cost = 0;

	vector<vector<int>> a;

	while (t--) {
		int price, units;
		fin >> price >> units;
		a.push_back({ price, units });
	}

	sort(begin(a), end(a));

	for (int i = 0; i < a.size() && total; i++) {
		if (a[i][1] <= total) {
			total -= a[i][1];
			cost += a[i][0]*a[i][1];
		}
		else {
			while (total) {
				total--;
				a[i][1]--;
				cost += a[i][0];
			}
		}
	}

	fout << cost << endl;

	return 0;
}*/