/*
ID: richard154
PROG: friday
LANG: C++

#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

int main() {
	int endyear;
	vector<int> w = { 0,0,0,0,0,0,0 }; // saturday, sunday, monday
	ofstream fout("friday.out");
	ifstream fin("friday.in");
	fin >> endyear;
	for (int y = 1900, t=0; y <= 1900 + endyear-1; y++) { // t == num of days since 1900, monday
		for (int m = 1, numDays; m <= 12; m++) {
			// change numDays depending on month
			if (m == 9 || m == 4 || m == 6 || m == 11) {
				numDays = 30;
			}
			else if (m == 2) {
				if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
					numDays = 29;
				}
				else {
					numDays = 28;
				}
			}
			else {
				numDays = 31;
			}
			//
			for (int d = 1; d <= numDays; d++,t++) {
				if (d == 13) {
					w[t%7]++;//
				}
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		w.insert(w.begin(), w[w.size() - 1]);
		w.pop_back();
	}
	for (int i = 0; i < w.size(); i++) {
		fout << w[i];
		if (i + 1 < w.size()) {
			fout << " ";
		}
	}
	fout << endl;
	return 0;
}
*/