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

void D(V<ll> a) {
	for (ll i : a)
		cout << i << " ";
	cout << endl;
}

void DPoints(V<ll> a) {
	cout << a[0] << ", " << a[1] << ", " << a[2] << endl;
}

V<ll> recursivePos(string s) {
	ll x = 0, y = 0, z = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) {
			switch (s[i]){
			case 'w':
				y++;
				break;
			case 'a':
				x--;
				break;
			case 's':
				y--;
				break;
			case 'd':
				x++;
				break;
			case 'z':
				z--;
				break;
			case 'x':
				z++;
				break;
			default:
				break;
			}
		}
		else { // num
			string tS = "";
			
			int h = i;
			for (; h < s.size() && s[h] != '['; h++) {
				tS += s[h];
			}

	//		cout << "repeat # - " << tS << endl;
			ll t = stoll(tS);

			int j = h + 1, stck = 1;
			for (; j < s.size(); j++) {
				if (s[j] == '[') {
					stck++;
				}
				if (s[j] == ']') {
					stck--;
				}
				if (stck == 0) {
					break;
				}
			}// find ending bracket
		
	//		cout << "recursive string passed - " << s.substr(h + 1, j - (h + 1)) << endl;
			V<ll> move = recursivePos(s.substr(h + 1,  j - (h + 1)));

			x += t * move[0];
			y += t * move[1];
			z += t * move[2];

	//		D(move);

	///		cout << "done with recursive INSIDE - " << j << endl;
			i = j;
		}
	}
	return { x, y, z };
}


ll minAll(pair<V<ll>, V<ll>> a) {
	return min(min3(a.first[0], a.first[1], a.first[2]), min3(a.second[0], a.second[1], a.second[2]));
}

bool between(ll a, ll b, ll x) { // x is between a and b
	if (a < b) {
		return a <= x && x <= b;
	}
	else {
		return b <= x && x <= a;
	}
}

V<pair<V<ll>, V<ll>>> bounds;

bool isInRange(V<ll> a) {

	for (auto i : bounds) {
		if (between(i.first[0], i.second[0], a[0]) && between(i.first[1], i.second[1], a[1]) && between(i.first[2], i.second[2], a[2])){
			return 1;
		}
	}
	return 0;
}

void solve() {
	int m;
	cin >> m;
	string p;
	cin >> p;
	int n;
	cin >> n;
	V<V<ll>> a(n, V<ll>(3));
	for (auto& i : a) {
		cin >> i[0] >> i[1] >> i[2];
	}
	ll x = 0, y = 0, z = 0;
	ll prevX = 0, prevY = 0, prevZ = 0;
	for (int i = 0; i < m; i++) {
	//	cout << "ITERATION - ";
	//	DPoints({ x,y,z });
		if (p[i] == '(') {
			
			bounds.PS({ {prevX, prevY, prevZ}, {x, y, z} });

			V<string> newP(3);
			int tp = 0;
			string t = "";
			int j = i + 1;
			for (; j < m; j++) {
				if (p[j] == ',' || p[j] == ')') {
					newP[tp] = t;
					tp++;
					t = "";
					if (p[j] == ')') {
						break;
					}
				}
				else {
					t += p[j];
				}
			}

			// set new values
			prevX = x = stoll(newP[0]), prevY = y = stoll(newP[1]), prevZ = z = stoll(newP[2]);

			i = j;
		}
		else if (isalpha(p[i])) {
			switch (p[i]){
			case 'w':
				y++;
				break;
			case 'a':
				x--;
				break;
			case 's':
				y--;
				break;
			case 'd':
				x++;
				break;
			case 'z':
				z--;
				break;
			case 'x':
				z++;
				break;
			default:
				break;
			}
		}
		else if (p[i] - '0' <= 9 && p[i] - '0' >= 0){ // num
		
			string tS = "";
			
			int h = i;
			for (; h < m && p[h] != '['; h++) {
			//	cout << p[h] << " - " << h << endl;
				tS += p[h];
			}


			//cout << "repeat # - " << tS << endl;
			ll t = stoll(tS);

			int j = h + 1, stck = 1;
			for (; j < m; j++) {
				if (p[j] == '[') {
					stck++;
				}
				if (p[j] == ']') {
					stck--;
				}
				if (stck == 0) {
					break;
				}
			}// find ending bracket

	//		cout << "recursive string passed - " << p.substr(h + 1, j - (h + 1)) << endl;
			V<ll> move = recursivePos(p.substr(h + 1,  j - (h + 1)));

			x += t * move[0];
			y += t * move[1];
			z += t * move[2];
			
	//		D(move);

	//		cout << "done with recursive - " << j << " = ";
	//		DPoints({ x,y,z });
			i = j;
		}
		else {
			cout << p[i] << " - " << i << endl;
			throw;
		}
	}

	bounds.PS({ {prevX, prevY, prevZ}, {x, y, z} });

	
	V<V<ll>> ans;
	for (V<ll> i : a) {
		if (isInRange(i)) {
			ans.PS(i);
		}
	}
	sort(IT(ans), [](V<ll> a, V<ll> b) {
		return a[0] < b[0];
	});
	cout << ans.size() << endl;
	for (auto i : ans) {
		cout << i[0] << " " << i[1] << " " << i[2] << endl;
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
