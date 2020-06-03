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

V<V<int>> g(26, V<int>(26, 0));
string t;
int used[26]{};
bool loop = 0;

void dfs(int x, int prev) {
	used[x] = 1;
	t += char(x + 'a');
	for (int i = 0; i < 26; i++) {
		if (i!= prev && g[x][i] == 1) {
			if (used[i] == 1) {
				loop = 1;
				return;
			}
			else {
				dfs(i, x);
			}
		}
	}
}

void solve() {
	t = "";
	loop = 0;
	memset(used, 0, sizeof(used));
	g = V<V<int>>(26, V<int>(26, 0));
	string s;
	cin >> s;
	for (int i = 1; i < s.size(); i++) {
		g[s[i - 1] - 'a'][s[i] - 'a'] = 1;
		g[s[i] - 'a'][s[i - 1] - 'a'] = 1;
	}
	int start = -1;
	for (int i = 0; i < 26; i++) {
		int c = 0;
		for (int j = 0; j < 26; j++) {
			c += g[i][j];
		}
		if (c > 2) {
			cout << "NO" << endl;
			return;
		}
		if (c == 1) {
			start = i;
		}
	}
	//cout << "start - " << char(start + 'a') << endl;
	// if start == -1, add the remaining letters on both sides
	dfs(start != -1 ? start : s[0]-'a', -1);
	if (loop == 0) {
		// contruct t - start == -1 means need letters on both sides
		cout << "YES" << endl;
		int l[26]{};
		for (char i : t) {
			l[i - 'a'] = 1;
		}
		string others;
		for (int i = 0; i < 26; i++) {
			if (l[i] == 0) {
				others += char(i + 'a');
			}
		}
		if (start == -1) {
			t.insert(begin(t), others[others.size() - 1]);
			others.erase(--end(others));
		}
		cout << t + others << endl;
	}
	else {
		cout << "NO" << endl;
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
