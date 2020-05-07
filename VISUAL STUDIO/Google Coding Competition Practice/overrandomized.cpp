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

bool sortByVal(pair<char,ll> a, pair<char,ll> b) 
{ 
    return (a.second > b.second); 
} 

void solve() {
//	int * dp = (int*)malloc(1000000000);
	unordered_map<char, ll> a;
	ll u;
	cin >> u;
	set<char> p;
	for (int i = 0; i < 10000; i++) {
		ll m;
		string t = "";
		cin >> m >> t;
		a[t[0]]++;
		for (auto i : t) {
			p.insert(i);
		}
	}
	vector<pair<char, ll>> b(begin(a),end(a));
	sort(b.begin(), b.end(), sortByVal);
	string m;
	for (auto i : b) {
		m+=i.first;
	}
//	m.insert(begin(m), m[m.size() - 1]);
//	m.erase(begin(m) + m.size()-1);
	for (auto i : p) {
		if (m.find(i) == string::npos) {
			cout << i + m << endl;
			return;
		}
	}
	cout << m << endl;
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
