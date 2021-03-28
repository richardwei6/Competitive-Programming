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
#define INT_MAX 2147483647
#define INT_MIN -2147483647

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

int num = 0, r, c;
//int isCurrentlyH = 0; // is currently horizontal
vector<vector<int>> a; // visited


struct vec2d {
	int x, y;
	bool operator==(const vec2d& other) const {
		return other.x == x && other.y == y;
	}
};

struct segment {
	vec2d a, b;
	int len;
};

int getL(vec2d a, vec2d b) {
	return max(abs(a.x - b.x), abs(a.y - b.y)) + 1;
}

bool comp(segment h, segment v) {
	if (v.a.x == h.a.x || v.b.x == h.a.x) {
		int mn = min(h.a.y, h.b.y), mx = max(h.a.y, h.b.y);
		if ((v.a.y <= mx && v.a.y >= mn) || (v.b.y <= mx && v.b.y >= mn)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

void solve() {
	cin >> r >> c;
	a = vector<vector<int>>(r, vector<int>(c, 0));
	for (auto& i : a) {
		for (int& j : i) {
			cin >> j;
		}
	}

	vector<segment> hz, vt;
	bool isC = 0;
	segment t;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {

			if (a[i][j] == 1) {
				if (!isC) { // create new
					t = segment();
					t.a = { i,j };
					isC = 1;
				}
			}
			else {
				if (isC) { // end at last
					vec2d end{ i, j - 1 };
					if (!(end == t.a)) {

						t.b = end;
						t.len = getL(t.a, t.b);
						hz.push_back(t);
						t = segment();
					}
					isC = 0;
				}
			}

		}
		if (isC) {
			vec2d end{ i, c - 1 };
			if (!(end == t.a)) {

				t.b = end;
				t.len = getL(t.a, t.b);
				hz.push_back(t);
				t = segment();
			}
			isC = 0;
		}
	}


	for (int j = 0; j < c; j++) {
		for (int i = 0; i < r; i++) {

		//	cout << i << ", " << j << endl;

			if (a[i][j]) {
				if (!isC) { // create new
				//	cout << "new - " << i << ", " << j << endl;
					t = segment();
					t.a = { i, j };
					isC = 1;
				}
			}
			else {
				if (isC) {

					vec2d end{ i - 1, j };
					if (!(end == t.a)) {

						//cout << "end - " << end.x << ", " << end.y << endl;
						t.b = end;
						t.len = getL(t.a, t.b);
						vt.push_back(t);
						t = segment();
					}
					isC = 0;

				}
			}

		}
		if (isC) {
			vec2d end{ r - 1, j };
			if (!(end == t.a)) {

				//cout << "end - " << end.x << ", " << end.y << endl;
				t.b = end;
				t.len = getL(t.a, t.b);
				vt.push_back(t);
				t = segment();
			}
			isC = 0;
		}
	}

	cout << hz.size() << " : " << vt.size() << endl;

	for (segment h : hz) {
		for (segment v : vt) {

			cout << h.len << " * 2 ==? " << v.len << endl;

			if (comp(h, v)) {
				//num++;
				int mx = max(h.len, v.len), mn = min(h.len, v.len);
				while (mn > 0){
					int d = mx / 2;
					if (d > 1 && mn > 1) {
						num++;
						mx -= 2;
						mn--;
					}
					else {
						break;
					}
				}
			}

			}
	}

	cout << num << endl;
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
