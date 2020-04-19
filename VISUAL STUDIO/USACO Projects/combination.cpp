/*
ID: richard154
PROG: combo
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
set<vector<int>> allComb;
int totalN;


void createComb(vector<int> n) {
	int a = n[0], b =  n[1], c = n[2]; // starting - a[0] , end is a[1]
	for (int t = 0; t < 2; t++,  a = a - 1 > 0 ? a - 1 : totalN, b = b - 1 > 0 ? b - 1 : totalN, c = c - 1 > 0 ? c - 1 : totalN);

	for (int i = a, t = 0; t < 5; t++, i = i+1 <= totalN? i+1 : 1) {
		for (int j = b, t1 = 0; t1 < 5; t1++, j = j + 1 <= totalN ? j + 1 : 1) {
			for (int x = c, t2 = 0; t2 < 5; t2++, x = x + 1 <= totalN ? x + 1 : 1) {
				allComb.insert({i,j,x});
			}
		}
	}
}



int main() {
	ofstream fout("combo.out");
	ifstream fin("combo.in");
	vector<int> johnComb, factComb;
	fin >> totalN;
	for (int i = 0; i < 3; i++) {
		int t;
		fin >> t;
		johnComb.push_back(t);
	}
	for (int i = 0; i < 3; i++) {
		int t;
		fin >> t;
		factComb.push_back(t);
	} 



	createComb(johnComb);
	createComb(factComb);
	

	fout << allComb.size() << endl;

	return 0;
}
*/