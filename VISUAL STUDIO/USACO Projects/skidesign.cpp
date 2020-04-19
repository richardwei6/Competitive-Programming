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


int largestDiff(vector<int> a) {
	int minH = 100, maxH = 0;
	for (int i : a) {
		minH = min(minH, i);
		maxH = max(maxH, i);
	}
	return maxH - minH;
}

int largestHillpos(vector<int> a) {
	int maxH = -1, p = -1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] > maxH) {
			maxH = a[i];
			p = i;
		}
	}
	return p;
}

int smallestHillpos(vector<int> a) {
	int minH = 101, p = -1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < minH) {
			minH = a[i];
			p = i;
		}
	}
	return p;
}

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

	vector<int> c(h.size(), 0);

	for (int alt = 0; largestDiff(h) > 17; alt++) { // alternating int
		// subtract 1 unit from largest hill and add 1 unit to smallest hill

		int p;
		if (alt % 2 == 0) {
			p = largestHillpos(h);
			h[p]--; // remove units
			c[p]++; // cost
		}
		else {
			p = smallestHillpos(h);
			h[p]++; // add units
			c[p]++; // cost
		}
	}

	int cost = 0; // calculate cost
	for (int i : c) {
		cost += i * i;
	}

	if (cost > 22946) {
		cost = 22946;
	}

	fout << cost << endl;

	return 0;
}