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
#include <bitset>
#include <iomanip>

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
#define PS(x) push_back(x)

void solve() {
	string a, b;
	cin >> a >> b;
	int x=0, y=0;
	for (auto i : a) {
		if (i == '+') {
			x++;
		}
		else {
			x--;
		}
	}
	int n = 0; // num of ?
	for (auto i : b) {
		if (i == '+') {
			y++;
		}
		else if (i == '-') {
			y--;
		}
		else {
			n++;
		}
	}
	double total = 0, correct = 0;
	for (int i = 0; i < (1 << n); i++) {
		bitset<10> t = i;
		int c = y;
		for (int j = 0; j < n; j++) {
			if (t[j] == 0) {
				c--;
			}
			else {
				c++;
			}
		}
		if (c == x) {
			correct++;
		}
		total++;
	}
	cout << setprecision(9) << correct / total << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
