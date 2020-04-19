#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

/*
void display(vector<vector<int>> a) {
	for (auto i : a) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
}

void solve(int n, int k, int p, vector<vector<int>> a) {
	int dp[100][100]{ 0 }, int s[100][100]{0};
	for (int i = 0; i < a.size(); i++) {
		for (int j = a[i].size() - 2; j > -1; j--) {
			a[i][j] += a[i][j + 1];
		}
		reverse(begin(a[i]), end(a[i]));
		a[i].insert(begin(a[i]), 0);
	}
	// a is sum
	//display(a);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= p; j++) {
			dp[i][j] = 0;
			for (int x = 0; x <= min(j, k); x++) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - x]);
			}
		}
	}
	cout << dp[n][p] << endl;
}


int main() {
	int t;
	cin >> t;
	for (int c = 1; c <= t; c++) {
		vector<vector<int>> a;
		int n, k, p;
		cin >> n >> k >> p;
		for (int i = 0; i < n; i++) {
			vector<int> m;
			for (int j = 0; j < k; j++) {
				int l;
				cin >> l;
				m.push_back(l);
			}
			a.push_back(m);
		}
		cout << "Case #" << c << ": ";
		//cout << endl;
		solve(n, k, p, a);
	}
	return 0;
}*/