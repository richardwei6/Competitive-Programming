
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



/// <summary>
///  STUPID PROBLEM
/// </summary>

const int SIZE = 200000;
int p[SIZE];
int ans[SIZE][2];
int ans_cnt;
bool judge(int a[], int n){
    static int used[SIZE+1];
    for(int i = 1; i <= n; i++) used[i] = 0;
    for(int i = 0; i < n; i++) used[a[i]] = 1;
    for(int i = 1; i <= n; i++) {
        if(!used[i]) return 0;
    }
    return 1;
}
bool judge(int len1, int n){
    return judge(p, len1) && judge(p + len1, n - len1);
}
int main() {
    int t = 0;
    scanf("%d", &t);
    while(t--) {
        ans_cnt = 0;
        int n;
        scanf("%d", &n);
        int ma=0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
            if(ma < p[i]) ma = p[i];
        }
        if(judge(n - ma,n)) {
            ans[ans_cnt][0] = n - ma;
            ans[ans_cnt++][1] = ma;
        }
        if(ma * 2 != n && judge(ma,n)) {
            ans[ans_cnt][0] = ma;
            ans[ans_cnt++][1] = n - ma;
        }
        printf("%d\n", ans_cnt);
        for(int i = 0; i < ans_cnt; i++) {
            printf("%d %d\n", ans[i][0], ans[i][1]);
        }
    }
    return 0;
}
 
/**//**/
