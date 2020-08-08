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

bool isPrime(int n) { 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
void solve() {
	int n;
	cin >> n;
	if (30 >= n) {
		NO;
	}
	else {
		YES;
		if (n - 30 == 6 && 39 < n) {
				cout << 10 << " " << 14 << " " << 15 << " " << n - 39 << endl;
		}
		else if (n - 30 == 10 && 35 < n) {
				cout << 6 << " " << 14 << " " << 15 << " " << n - 35 << endl;
		}
		else if (n - 30 == 14 && 31 < n) {
			cout << 10 << " " << 6 << " " << 15 << " " << n - 31 << endl;
		}
		else if (n - 30 != 14 && n - 30 != 10 && n - 30 != 6) {
			cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
		}
		else {
			cout << 5 << " " << 6 << " " << 10 << " " << 15 << endl;
		}	
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
