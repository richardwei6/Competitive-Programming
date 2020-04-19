#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

/*int check(int n, int k) { // 1 for same 2 for descending
	if (k % n == 0) {
		return 1;
	}
	if (n % 2 != 0) {
		int s = 0;
		for (int i = n; i > 0; i--) {
			s += i;
		}
		if (s == k) {
			return 2;
		}
	}
	return 0;
}

void display(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void latin(int n, int k, int type) {

}

int main() {
	int t;
	cin >> t;
	for (int c = 1; t--; c++) {
		int n, k;
		cin >> n >> k;
		int type = check(n, k);
		cout << "Case #" << c << ": ";
		if (type>0) {
			cout << "POSSIBLE" << endl;
		}
		else {
			cout << "IMPOSSIBLE" << endl;
			continue;
		}
		latin(n, k, type);

	}
	return 0;
} */