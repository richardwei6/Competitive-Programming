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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

  
int countDivisibles(int A, int B, int M) 
{ 
    if (A % M == 0) 
        return (B / M) - (A / M) + 1;
	return (B / M) - (A / M); 
} 
  

void solve() {
	int n, k, c =0;
	cin >> n >> k;
	// number of int smaller than k % n == 0 + k	
	//cout << countDivisibles(1, k, n) << endl;
	int t = countDivisibles(1, k, n) + k;
	while (countDivisibles(1, t, n) > t-k) {
	//	cout << t << endl;
		t = countDivisibles(1, t, n) + k;
	}
	cout << t << endl;
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
