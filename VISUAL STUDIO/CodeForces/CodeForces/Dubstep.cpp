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
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

void solve() {
	string s;
	cin >> s;
	vector<string> a;
	while (1) {
		auto f = s.find("WUB");
		if (f == string::npos) {
			break;
		}
		s.replace(f, 3, " ");
	}
	string t;
	bool p = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ' && p == 1) {
			a.push_back(t);
			t = "";
			p = 0;
		}
		if (i + 1 == s.size() && (p == 1 || s[i] != ' ' ) ) {
			t += s[i];
			a.push_back(t);
		}
		if (s[i] != ' ') {
			t += s[i];
			p = 1;
		}
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
		if (i + 1 < a.size()) {
			cout << " ";
		}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
