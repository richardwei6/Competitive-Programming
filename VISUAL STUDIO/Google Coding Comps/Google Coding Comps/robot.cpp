#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
using namespace std;

#define ll long long
#define V vector

string d;
ll p = 0;

const ll mxn = 1e9;

V<ll> solve() {
	V<ll> r = { 0,0 };
	while (1) {
		if (p >= d.size()) {
			break; // end of string
		}
		if (d[p] == ')') {
			break; // recursive breakpoint
		}
		if (d[p] == 'S') {
			++r[1];
			if (r[1] >= mxn) {
				r[1] -= mxn;
			}
		}
		else if (d[p] == 'N') {
			--r[1];
			if (r[1] < 0) {
				r[1] += mxn;
			}
		}
		else if (d[p] == 'W') {
			--r[0];
			if (r[0] < 0)
				r[0] += mxn;
		}
		else if (d[p] == 'E') {
				++r[0];
				if (r[0] >= mxn)
					r[0] -= mxn;
		}
		else { // encoutered a number
			ll t = d[p++] - '0';
			++p;
			 // pass string inside parantheses
			V<ll> a = solve();
			r[0] = (r[0] + t * a[0]) % mxn; // num of times
			r[1] = (r[1] + t * a[1]) % mxn;
		}
		++p;
	}
	return r;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		p = 0;
		cin >> d;
		cout << "Case #" << i << ": ";
		V<ll> a = solve();
		cout << a[0]+1 << " " << a[1]+1 << endl;
	}
	return 0;
}