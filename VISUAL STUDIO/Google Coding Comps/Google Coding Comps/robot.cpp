/*#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
#include <stack>
#include <regex> 
#include<ostream>
using namespace std;


#define S string
#define F decodeString(
S F S s) {
    S r, t;
    for (size_t n, c, k, j, i = 0; i < s.size(); ++i)
        if (isdigit(s[i])) {
            n = stoi(&s[i], &k);
            j = i = i + k + 1;
            for (c = 1; c; ++i)
                c += s[i] != 41 ? s[i] == 40 : -1;
            for (t = F{ s, j, --i - j }); n--; )
            r += t;
        }
        else
            r += s[i];
    return r;
}





void solve(string p) {
    long x = 1, y = 1;
    for (char i : p) {
        if (i == 'N' || i == 'S') {
            if (i == 'S') {
                y = y + 1 > 1000000000 ? 1 : y + 1;
            }
            else {
                y = y - 1 < 1 ? 1000000000 : y - 1;
            }
        }
        else { // E W
            if (i == 'E') {
                x = x + 1 > 1000000000 ? 1 : x + 1;
            }
            else {
                x = x - 1 < 1 ? 1000000000 : x - 1;
            }
        }
    }
    cout << x << " " << y << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string p;
        cin >> p;
        p = decodeString(p);
        
        cout << "Case #" << i << ": ";
        solve(p);
    }
    return 0;
}*/