
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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

bool good(string s) {
	map<char, int> a;
	for (char i : s) {
		a[i]++;
	}
	return a['0'] != a['1'];
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i = 0;
	if (n != 1 && good(s)==0) {
		for (; i+1 < s.size(); i++) {
			string a = s.substr(0, i+1), b = s.substr(i+1, s.size()-i);
		//	cout << a << " - "<<b << endl;
			if (good(a) && good(b)) {
				cout << 2 << endl;
				cout << a << " " << b << endl;
				return;
			}
		}
	}
	else {
		cout << 1 << endl;
		cout << s << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
