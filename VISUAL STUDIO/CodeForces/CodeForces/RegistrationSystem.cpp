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

unordered_map<string,int> a;// string is base string int is number next

void solve() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (a.find(s)==end(a)) {
			a[s]=1;
			cout << "OK" << endl;
		}
		else {
			cout << s + to_string(a[s]) << endl;
			a[s]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
