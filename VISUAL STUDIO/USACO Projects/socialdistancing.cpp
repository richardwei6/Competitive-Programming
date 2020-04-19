/*

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm> 
#include <cmath>
using namespace std;

int SD(vector<int> a) { // smallest distance between cows -- 10001001000010 - 2
	int mindist = INT16_MAX;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 1 || a[i] == 2) {
			int t = 0;
			if (i > 0) {
				for (int j = i-1; a[j] == 0; j--) {
					if (j  == 0) {
						t = INT16_MAX;
						break;
					}
					t++;
				} // check left
				mindist = min(t, mindist);
			}
			//cout << "left - " << t << endl;
			t = 0;
			if (i + 1 < a.size()) {
				t = 0;
				for (int j = i+1; j < a.size() && a[j] == 0; j++) {
					if (j+1 == a.size()) {
						t = INT16_MAX;
						break;
					}
					t++;
				}
				mindist = min(t, mindist);
			}
			//cout << "right - " << t << endl;
			//cout << a[i] << " - " << mindist << endl;
		}
	}
	return mindist;
}
/*void display(vector<int> a) {
	for (int i : a) {
		cout << i << " ";
	}
	cout << " - " << SD(a)<<endl;
}
int main() {
	vector<int> st; // stalls
	ofstream fout("socdist1.out");
	ifstream fin("socdist1.in");
	string sstall = "10001001000010";
	int s = 14;
	fin >> s;
	fin >> sstall;
	for (int i : sstall) {
		st.push_back(i - 48);
	}
	//cout << SD(st) << endl;
	int m; // max of smallest distance
	for (int i = 0; i < s; i++) { // first cow
		if (st[i] == 0) {
			st[i] = 2;
			for (int j = 0; j < s; j++) { // second cow
				if (st[j] == 0) {
					st[j] = 2;
					//display(st);
					m = max(m, SD(st));
					st[j] = 0; // reset
				}
			}
			st[i] = 0; // reset
		}
	}
	cout <<"final - " <<m << endl;
	//fout << m;
	return 0;
}
*/