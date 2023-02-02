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
template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
    //cout << " --- " << endl;

	int n;
    cin >> n;
    V<ll> a(n);
    for (ll& i : a)
        cin >> i;
    
    // 1 -> 0
     // how many 1 to left + 
     // how many 0 to right -
    // 0 -> 1
     // how many 1 to left -
     // how many 0 to right +

    V<ll> l(n); 
    V<ll> r(n); 

    ll c = 0;
    for (int i = 0; i < n; i++){
        l[i] = c;
        if (a[i] == 1){
            c++;
        }
    }

    c = 0;

    for (int i = n - 1; i > -1; i--){
        r[i] = c;
        if (a[i] == 0){
            c++;
        }
    }

    //

    //D(l);
    //D(r);

    ll mxd = 0, mxi = -1;

    for (int i = 0; i < n; i++){
        
        ll d;
        if (a[i] == 1){
            d = l[i] - r[i];
            //cout << "1 at " << i << " with " << d << endl;
        }
        else{
            d = r[i] - l[i];
            //cout << "0 at " << i << " with " << d << endl;
        }

        if (d > mxd){
            mxd = d;
            mxi = i;
        }

    }

    //cout << mxd << " : " << mxi << endl;
    if (mxi != -1){
        a[mxi] = 1-a[mxi];
    }

    //D(a);

    //

    c = 0;

    for (int i = 0; i < n; i++){
        l[i] = c;
        if (a[i] == 1){
            c++;
        }
    }

    c = 0;

    for (int i = n - 1; i > -1; i--){
        r[i] = c;
        if (a[i] == 0){
            c++;
        }
    }

    //

    c = 0;

    for (int i = 0; i < n; i++){
        if (a[i] == 1){
            c += r[i];
        }
    }

    cout << c << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}