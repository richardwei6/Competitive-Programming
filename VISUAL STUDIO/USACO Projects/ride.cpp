/*
ID: richard154
PROG: ride
LANG: C++

#include<iostream>
#include<fstream>
using namespace std;

bool modcheck(string s, string g) {
	int ss = 1, sg = 1;
	for (int i = 0; i < s.size(); i++) {
		ss *= tolower(s[i]) - 96;
	}
	for (int i = 0; i < g.size(); i++) {
		sg *= tolower(g[i]) - 96;
	}
	return ss % 47 == sg % 47;
}

int main0() {
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	string spaceship, group;
	fin >> spaceship >> group;
	if (modcheck(spaceship, group)) {
		fout << "GO" << endl;
	}
	else {
		fout << "STAY" << endl;
	}
	return 0;
}
*/