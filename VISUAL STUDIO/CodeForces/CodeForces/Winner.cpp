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
 int main()
{
    long int i,j,n,m,x;
    cin >> n;
        string s[10000];
        int a[10000];
        map<string,long int>mp;
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>a[i]; // input all into mp and store each move into arr s and a
            mp[s[i]]+=a[i];
        }
        long int mx=0;
        for(i=0;i<n;i++)
        {
            mx=max(mp[s[i]],mx); // take max value of mp
        }
        map<string,long int>mp2; // second mp2
        string ans;
 
        for(i=0;i<n;i++) // start from past moves
        {
            mp2[s[i]]+=a[i];
            if (mp2[s[i]] >= mx && mp[s[i]] == mx) // prev max move was bigger than current move and end result is max
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
 
    return 0;
} 
 
/**/
