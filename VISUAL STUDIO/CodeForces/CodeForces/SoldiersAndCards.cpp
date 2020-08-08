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

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

int math(int n) {
	int ans = 1;
	for (int i = 2; i <= n + 1; i++) {
		ans *= i;
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	int t;
	cin >> t;
	dq<int> a(t);
	for (int& i : a)
		cin >> i;
	cin >> t;
	dq<int> b(t);
	for (int& i : b)
		cin >> i;
	int c = 0;
	while (a.size() > 0 && b.size() > 0) {
		if (a.front() > b.front()) {
			a.PS(b.front());
			a.PS(a.front());
			b.pop_front();
			a.pop_front();
		}
		else {
			b.PS(a.front());
			b.PS(b.front());
			a.pop_front();
			b.pop_front();
		}
		c++;
		if (c > math(n)) {
			cout << -1 << endl;
			return;
		}
	}
	cout << c << " " << (a.size() > 0 ? 1 : 2) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
