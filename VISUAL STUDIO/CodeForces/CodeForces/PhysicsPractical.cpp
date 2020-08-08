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
#include <fstream>
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

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int t[5001]{};

void solve() {
	ofstream fout("output.txt");
	ifstream fin("input.txt");
	int n;
	fin >> n;
	for (int i = 0; i < n; i++) {
		int j;
		fin >> j;
		t[j]++;
	}
	int l[5001]{}, r[5002*2]{};
	for (int i = 1; i <= 5000; i++) {
		l[i] = l[i - 1] + t[i];
	}
	for (int i = 5000; i >= 1; i--) {
		r[i] = r[i + 1] + t[i];
	}
	int mn = INT_MAX;
	for (int i = 1; i <= 5000; i++) {
		mn = min(mn, l[i - 1] + r[(i*2) + 1]);
	}
	fout << mn << endl;
}	

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
