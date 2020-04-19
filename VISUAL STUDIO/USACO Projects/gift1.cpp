/*
ID: richard154
PROG: gift1
LANG: C++

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

vector<string> names;
vector<int> balances; // balances and names correspond

int findpos(string name) {
	for (int i = 0; i < names.size(); i++) {
		if (names[i] == name) {
			return i;
		}
	}
}

int main() {
	int totallist,spent,npeop;
	string temp;
	ofstream fout("gift1.out");
	ifstream fin("gift1.in");
	fin >> totallist;
	for (int i = 0; i < totallist; i++) {
		fin >> temp;
		names.push_back(temp);
		balances.push_back(0);
	}
	while (!fin.eof()) {
		fin >> temp;
		fin >> spent >> npeop;
		int pb, m;
		if (npeop == 0) {
			pb = 0;
			m = 0;
		}
		else {
			pb =spent / npeop;
			m = spent % npeop;
		}
		balances[findpos(temp)] -= spent;
		balances[findpos(temp)] += m;
		for (int i = 0; i < npeop; i++) {
			fin >> temp;
			balances[findpos(temp)] += pb;
		}
	}
	for (int i = 0; i < names.size(); i++) {
		fout << names[i] << " " << balances[i] << endl;
	}
	return 0;
}
*/