#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
using namespace std;
/*
int prob[10001][10001]; // probabilty of each pos
int w, h, l, u, r, d;


bool insidehole(int x, int y) {
	if (x <= r && x >= l) {
		if (y <= u && y >= d) {
			return 1;
		}
	}
	return 0;
}

void generateProb(int x, int y) {
	if (x > w) {
		return;
	}
	if (y > h) {
		return;
	}
	if (insidehole(x,y)) {// check if inside hole
		prob[x][y] = 0;
	}
	else {
		prob[x][y] = 1;
	}
	generateProb(x + 1, y);
	generateProb(x, y + 1);
}


void solve() {
	generateProb(1, 1);
	long long able = 0;
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			if (prob[i][j] == 1) {
				able++;
			}
		}
	}
	cout << (long double)able / long(w * h) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> w >> h >> l >> u >> r >> d;
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
*/

