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

V<pair<int, int>> adj = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };


ll stringToBinary(string s) {
	ll n = 0, b = 1;
	for (int i = s.size() - 1; i > -1; i--) {
		if (s[i]) {
			n += b;
		}
		b *= 2;
	}
	return n;
}
bool isPrime(int n) { 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
ll bigPow(ll x, ll n, ll M) {
	if (n < 0) {
		return bigPow(1 / x, -n, M)%M;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x)%M, n / 2, M)%M;
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x)%M, (n - 1) / 2, M))%M;
	}
}

ll bigPow(ll x, ll n) {
	if (n < 0) {
		return bigPow(1 / x, -n);
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x), n / 2);
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x), (n - 1) / 2));
	}
}

string toBinary(ll n){
    string r;
    while(n) {
		r.insert(begin(r), (n%2==0 ?'0':'1'));
		n/=2;
	}
    return r;
}

unsigned ll nChoosek( unsigned ll n, unsigned ll k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned ll result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

