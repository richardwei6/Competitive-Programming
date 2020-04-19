/*
ID: richard154
PROG: barn1
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

map<int, int> g; // gaps - key is gap

int numOfConsec(vector<int> a) {
	int n = 1;
	for (int i = 1; i < a.size(); i++) {
		if (a[i] - a[i - 1] > 1) {
			n++;
			g[a[i] - a[i - 1] - 1] = i-1;
		}
	}
	return n;
}

vector<int> fillGap(vector<int> a, int s) {
	for (int endN = a[s + 1], n = a[s]+1; n != endN; n++) {
		a.insert(begin(a), n);
	}
	sort(begin(a), end(a));
	return a;
}

int main() {
	ofstream fout("barn1.out");
	ifstream fin("barn1.in");
	vector<int> s; // stalls 
	int m, stalls, c;
	fin >> m >> stalls >> c;
	while (c--) {
		int t;
		fin >> t;
		s.push_back(t);
	}
	sort(begin(s), end(s));
	while (numOfConsec(s) != m && numOfConsec(s)>m) {
		s = fillGap(s, begin(g)->second);
		g.erase(begin(g)->first);
	}
	fout << s.size() << endl;
	return 0;
}*/