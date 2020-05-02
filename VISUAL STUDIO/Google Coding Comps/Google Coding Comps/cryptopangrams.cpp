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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector


bool p[999999]; // generate all prime nums


void solve() {
	int n, l;
	cin >> n >> l;
	V<ll> a;
	while (l--) {
		int m;
		cin >> m;
		a.push_back(m);
	}
	memset(p, true, sizeof(p));
	for (ll i = 2; i * i <= n; i++) {
		if (p[i] == 1) {
			// update all values of multiples of i greater than i starting at i^2
			for (ll m = i * i; m <= n; m += i) {
				p[m] = 0;
			}
		}
	}
	// index is num
	V<ll> f; // factored elements - 2x size of a
	for (ll i : a) {
		for (ll m = 2; m <= n; m++) { // look through prime directory
		//	cout << m << " ";
			if (p[m] && i%m==0) { // if is prime and is divisible into num
				f.push_back(m);
				f.push_back(i/m);
				break;
			}
		}
	}




	
	unordered_map<ll, char> d; // dictionary - size of 26

	int alpC = 0;

	set<ll> t(begin(f), end(f));
	for (ll i : t) {
		d[i] = alpC + 'A';
		alpC++;
	}



//	cout << "creating now - ----- " << endl;

	string o;
	for (ll i : f) {
		cout << i << " ";
		o+=d[i];
	}
	cout << endl;
	//cout << endl;
	
	cout << o << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}


/**/
