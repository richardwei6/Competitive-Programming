
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
#include <cstring>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define ld long double
#define ull unsigned long long
#define V vector
#define dq deque
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;
#define INT_MAX 2147483647
#define INT_MIN -2147483647

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> lp(n);
	for (int i = 0; i < n; i++) {
		lp[i] = i + 1;
	}

	do {

		vector<int> l = lp;

		int c = 0;
		for (int i = 0; i < n - 1; i++) {
			int mn = l[i], mnp = i;
			for (int j = i; j < n; j++) {
				if (l[j] < mn) {
					mnp = j;
					mn = l[j];
				}
			}
			c += mnp - i + 1;
			reverse(begin(l) + i, begin(l) + mnp + 1);
		}

		if (k == c){
			D(lp);
			return;
		}

	} while (next_permutation(IT(lp)));

	cout << "IMPOSSIBLE" << endl;
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

