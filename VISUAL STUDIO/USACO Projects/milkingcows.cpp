/*
ID: richard154
PROG: milk2
LANG: C++
*/
/*
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <string>
#include <vector>
using namespace std;



int main() {
    std::ios::sync_with_stdio(false);
    ofstream fout("milk2.out");
    ifstream fin("milk2.in");
    vector<vector<int>> m;
    int t, mx = 0, mn = INT16_MAX;
    fin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        fin >> a >> b;
        mx = max(mx, a);
        mn = min(mn, a);
        mx = max(mx, b);
        mn = min(mn, b);
        m.push_back({ a,b });
    }

    int milked  = 0, unmilked = 0;

    vector<int> a (mx-mn,0); // size of timeline consisting of 0 and 1 - 1 is cow was milked during this time - zero based
    //cout << size(a) << endl;
   // cout << m[0][0] - mn << " to " << m[0][1] - mn << endl;
   for (auto i : m) {
        for (int x = i[0]-mn; x < i[1]-mn; x++) {
            a[x] = 1;
        }
    } // set up

    for (int i = 0; i < a.size(); i++) { //
        if (a[i] != 0) { // time start
            int j = i; // count how many in group
            for (; j < a.size() && a[j] != 0; j++);
            milked = max(milked, j - i);
            i = j;
        }
    }

    // unmilked
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 0) {
            int j = i;
            for (; j < a.size() && a[j] == 0; j++);
            unmilked = max(unmilked, j - i);
            i = j;
        }
    }


    fout <<milked << " " << unmilked << endl;
    
    return 0;
}*/