
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
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	if ((abs(x - a) > 0 && abs(y - b) > 0) && abs(x-a) != abs(y-b)) {
		cout << -1 << endl;
		return;
	}
	else {
		if (abs(x - a) == abs(y - b)) { // diagonal
			int s = abs(x - a);
			if (y > b) {
				cout << x << " " << y-s << " " << a << " " << b+s << endl;
			}
			else {
				cout << x << " " << y + s << " " << a << " " << b - s << endl;
			}
		}
		else {
			if (abs(x - a) > 0) { // vertical points
				cout << x << " " << y + abs(x - a) << " " << a << " " << b + abs(x - a) << endl;
			}
			else { // horizontal points
				cout << x + abs(y - b) << " " << y << " " << a + abs(y - b) << " " << b << endl;
			}
		}
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
