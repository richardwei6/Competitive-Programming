/*

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
#include <limits>
#include <list>
#include <memory>
#include <stack>
#include <iterator>
#include <queue>
#include <numeric>

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
/*
int numOfStrings(string s) {
	int n = 0;
	size_t t = s.find("one");
	while (t != string::npos) {
		t = s.find("one", t+1);
		n++;
	}
	t = s.find("two");
	while (t != string::npos) {
		t = s.find("two", t+1);
		n++;
	}
	return n;
}


void solve() {
	string s;
	cin >> s;
//	cout << numOfStrings(s) << endl;
	vector<int> p; // remove pos
	for (size_t a, b;;) {
		a = s.find("one");
	//	cout << s << endl;
		if (a != string::npos) {
			int prev = numOfStrings(s);
			int mn = prev, pos = -1;
			for (int i = int(a); i < 3+int(a); i++) { // iterate through one
				string t = s;
				t.erase(begin(t) + i);
				int n = numOfStrings(t);
				if (n < prev && n < mn) { // min num from erasing this string
					mn = n;
					pos = i;
				}
			}
			// now perform erase
			s.erase(begin(s) + pos);
			// in order to avoid pos shift, check through p and see if any are smaller than pos, if they are pos++.
			for (int m : p) {
				if (m < pos) {
					pos++;
				}
			}
			p.push_back(pos);
		}
		
		b = s.find("two");
		if (b != string::npos) {
			int prev = numOfStrings(s);
			int mn = prev, pos = -1;
			for (int i = int(b); i < 3+int(b); i++) { // iterate through two
				string t = s;
				t.erase(begin(t) + i);
				int n = numOfStrings(t);
				if (n < prev && n < mn) { // min num from erasing this string
					mn = n;
					pos = i;
				}
			}
			// now perform erase
			s.erase(begin(s) + pos);
			// in order to avoid pos shift, check through p and see if any are smaller than pos, if they are pos++.
			for (int m : p) {
				if (m < pos) {
					pos++;
				}
			}
			p.push_back(pos);
		}
		if (b == string::npos && a == string::npos) {
			break;
		}
	}
//	cout << "end string - " << s << endl;
	cout << p.size() << endl;
	for (int i : p) {
		cout << i+1 << " ";
	}
	cout << endl;
}


void solve() {
	string s;
	cin >> s;
	vector<int> o;
	for (string i : {"twone" ,"two", "one" }) {
		for (size_t p = s.find(i,0); p != string::npos; p = s.find(i,p)) {
			s[p + i.size() / 2] = 'X'; // removes middle char
			o.push_back(p + i.size() / 2);
		}
	}
	cout << o.size() << endl;
	for (auto i : o) {
		cout << i + 1 << " " ;
	}
	cout << endl;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
