
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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

void solve() {
	int n, m = 0;
	cin >> n;
	for (; n--;) {
		string s;
		cin >> s;
		if (s == "Tetrahedron") {
			m += 4;
		}
		else if (s == "Cube") {
			m += 6;
		}
		else if (s == "Octahedron") {
			m += 8;
		}
		else if (s == "Dodecahedron") {
			m += 12;
		}
		else {
			m += 20;
		}
	}
	cout << m << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/