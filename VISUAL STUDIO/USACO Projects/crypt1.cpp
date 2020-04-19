/*
ID: richard154
PROG: crypt1
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

unordered_set<int> dig; // digits

int sizeOfInt(int n) {
	int t = 0;
	while (n) {
		n /= 10;
		t++;
	}
	return t;
}


bool isMember(int n) {
	set<int> t;
	while (n) {
		t.insert(n % 10);
		n /= 10;
	}
	for (int i : t) {
		if (dig.find(i) == end(dig)) { // digit not found in set
			return 0;
		}
	}
	return 1;
}

int main() {
	ofstream fout("crypt1.out");
	ifstream fin("crypt1.in");
	int numUsed;
	fin >> numUsed;
	while (numUsed--) {
		int n;
		fin >> n;
		dig.insert(n);
	}
	
	int totalNumOfSol = 0; // number of solutions

	for (int a : dig) { // generate all combinations of numbers - dig.size() C 5 - dig.size() choose 5 numbers
		for (int b : dig) {
			for (int c : dig) {
				for (int d : dig) {
					for (int e : dig) {
						
						int n = a * 100 + b * 10 + c; // n is guaranteed to have only member digits

						int p1 = n * d, p2 = n * e;
						
						if (isMember(p1) && isMember(p2) && isMember(p1 +(p2*10)) && sizeOfInt(p1) == 3 && sizeOfInt(p2) == 3) { // checks for all digits
							/*cout << "===========start=================" << endl;
							cout << n << endl;
							cout << "*" << c << d << endl;
							cout << p1 << endl;
							cout << p2 * 10 << endl;
							cout << "------" << endl;
							cout << p1 + (p2 * 10) << endl;
							cout << "============end==================" << endl;
							totalNumOfSol++;
						}
						else {
							continue;
						}
					}
				}
			}
		}
	}

	fout << totalNumOfSol << endl;

	return 0;
}*/