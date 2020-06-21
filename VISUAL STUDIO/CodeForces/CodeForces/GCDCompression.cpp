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

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
	int n;
	cin >> n;
	V<int> a(2 * n);
	deque<int> e, o; // pos of even and odd
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			e.PS(i);
		}
		else {
			o.PS(i);
		}
	}
	int c = 0;
//	cout << e.size() << " " << o.size()  << "  = " << (n-1) << endl;
	if (floor((double)e.size() / 2) >=  n - 1) {
	//	cout << "all even" << endl;
		while (e.size() > 1 && c < n-1) {
			cout << e.front() + 1 << " " << e.back() + 1 << endl;
			e.pop_back();
			e.pop_front();
			c++;
		}
	}
	else if (floor((double)o.size() / 2) >= n - 1) {
	//	cout << "all even" << endl;
		while (o.size() > 1 && c < n - 1) {
			cout << o.front() + 1 << " " << o.back() + 1 << endl;
			o.pop_back();
			o.pop_front();
			c++;
		}
	}
	else if (floor(e.size() / 2) + floor(o.size() / 2) >= n - 1){ // min(e.size(), o.size()) >= n-1
	//	cout << "all odd" << endl;
		while (o.size() > 1 && c < n - 1) {
			cout << o.front() + 1 << " " << o.back() + 1 << endl;
			o.pop_back();
			o.pop_front();
			c++;
		}
		while (e.size() > 1 && c < n-1) {
			cout << e.front() + 1 << " " << e.back() + 1 << endl;
			e.pop_back();
			e.pop_front();
			c++;
		}
	}
	else {
		throw;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
