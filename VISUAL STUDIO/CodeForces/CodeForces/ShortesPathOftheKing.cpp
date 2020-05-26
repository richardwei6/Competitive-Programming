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
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void solve() {
	int n[2]{}, t[2]{};
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	n[0] = a - 'a', n[1] = b - '1';
	t[0] = c - 'a', t[1] = d - '1';
	V<string> m; // moves
	while (n[0] != t[0] || n[1] != t[1]) {
		string curr;
		if (abs(n[0]-t[0]) > 0) { // x axis
			if (t[0] - n[0] > 0) { // right
				curr += "R";
				n[0]++;
			}
			else { // left
				curr += "L";
				n[0]--;
			}
		}
		if (abs(n[1]-t[1]) > 0) { // y axis
			if (t[1] - n[1] > 0) { // up
				curr += "U";
				n[1]++;
			}
			else { // down
				curr += "D";
				n[1]--;
			}
		}
		m.PS(curr);
	}
	cout << m.size() << endl;
	for (auto i : m) {
		cout << i << endl;
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
