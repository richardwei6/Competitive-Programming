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

int sumOfDigits(string s) {
	int n = 0;
	for (auto i : s) {
		n += i - '0';
	}
	return n;
}


void solve() {
	int m, s;
	cin >> m >> s; // length and sum
	if (m == 1 && s == 0) {
		cout << "0 0" << endl;
		return;
	}
	string a(m, '0'), b(m, '0'); // biggest and smallest
	a[0] = '1', b[0] = '1';
	int i = 0;
	while (sumOfDigits(a) != s) {
		if (a[i]-'0'+1 > 9) {
			if (i + 1 < m) {
				i++;
				continue;
			}
			else {
				a = "";
				break;
			}
		}
		a[i]++;
	}
	i = m-1; // reset
	while (sumOfDigits(b) != s) {
		if (b[i]-'0'+1 > 9) {
			if (i - 1 > -1) {
				i--;
				continue;
			}
			else {
				b = "";
				break;
			}
		}
		b[i]++;
	}
	if (a.size() && b.size()) {
		cout << b << " " << a << endl;
	}
	else {
		cout << "-1 -1" << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
