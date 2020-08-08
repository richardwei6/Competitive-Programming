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
 
void D(dq<char> a) {
	for (char i : a)
		cout << i << " ";
	cout << endl;
}
 
V<V<int>> g(26);
int pass[26]{}, stackT[26]{};

dq<char> p;

bool f = 0;
 
void dfs(int x) {
	pass[x] = 1;
	for (int i : g[x]) {
		if (pass[i] == 0) {
			dfs(i);
		}
	}
	p.push_front((char)(x + 'a'));
}


void cycleC(int x) {
	stackT[x] = 1;
	pass[x] = 1;
	for (int i : g[x]) {
		if (pass[i] == 0) {
			cycleC(i);
		}
		else if (stackT[i] == 1) {
			f = 1;
			return;
		}
	}
	stackT[x] = 0;
}

void solve() {
	int n;
	cin >> n;
	V<string> a(n);
	for (string& i : a) {
		cin >> i;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < a[i - 1].size(); j++) {
			if (j >= a[i].size()) {
				cout << "Impossible" << endl;
				return;
			}
			if (a[i][j] != a[i-1][j]) { // i-1 goes before i
				g[a[i - 1][j] - 'a'].PS(a[i][j] - 'a');
				break;
			}
		}
	}
	for (int i = 0; f == 0 && i < 26; i++) {
		if (pass[i] == 0) {
			cycleC(i);
		}
	}
	if (f == 0) {
		memset(pass, 0, sizeof(pass));
		for (int i = 0; i < 26; i++) {
			if (pass[i] == 0) {
				dfs(i);
			}
		}
		for (char i : p) {
			cout << i;
		}
		cout << endl;
	}
	else {
		cout << "Impossible" << endl;
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}
 
 
/**/
