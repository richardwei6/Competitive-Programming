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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
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

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
        ll i,j,k;
        ll n,count=0;
        ll seg=0;
        ll l,r;

        cin>>n;
        V<ll> a(n), s(n);

        for(i=0;i<n;i++){
            cin>>a[i];
            s[i]=a[i];
        }

        sort(IT(s));
        for(i=0;i<n;i++){
            if(s[i]==a[i])
                count++;
        }

        if(count==n){
            cout<<"yes\n1 1";
            return;
        }

        for(i=0; i<n-1,seg<1;){
            if(a[i]<a[i+1]){
                i++;
            }
            else{
                l=i;
                r=i;
               while(i < n-1 && a[i]>a[i+1]){
                   i++;
                   r++;
               }
               sort(begin(a)+l,begin(a)+r+1);
               seg++;
            }
        }

        for(i=0;i<n;i++){
            if(s[i]!=a[i]){
                cout<<"no";
                return;
            }
        }

        cout<<"yes\n"<<l+1<<" "<<r+1;
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
