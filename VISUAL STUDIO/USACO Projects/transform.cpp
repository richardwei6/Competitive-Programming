/*
ID: richard154
PROG: transform
LANG: C++
*/
/*
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;


vector<vector<char>> reflect(vector<vector<char>> a) { // reflect horizontally
    for (int i = 0; i < a.size(); i++) {
        reverse(begin(a[i]), end(a[i]));
    }
    return a;
}


vector<vector<char>> rightRotation(vector<vector<char>> m) { // transform 90 degrees 
    vector<vector<char>> o;
    for (int i = 0; i < m.size(); i++) {
        vector<char> a;
        for (int j = 0; j < m.size(); j++) {
            a.push_back(m[j][i]);
        }
        reverse(begin(a), end(a));
        o.push_back(a);
    }
    return o;
}

int main() {
    std::ios::sync_with_stdio(false);
    vector<vector<char>> orig, nw; // original and new
    ofstream fout("transform.out");
    ifstream fin("transform.in");
    int t;
    fin >> t;
    for (int i = 0; i < t; i++) {
        vector<char> a;
        for (int j = 0; j < t; j++) {
            char m;
            fin >> m;
            a.push_back(m);
        }
        orig.push_back(a);
    }
    for (int i = 0; i < t; i++) {
        vector<char> a;
        for (int j = 0; j < t; j++) {
            char m;
            fin >> m;
            a.push_back(m);
        }
        nw.push_back(a);
    }
    int i = 1;
    for (; i < 7; i++) {
        if (i == 1) { // excuse my horrible code whomever might be reading this - a switch case statement wouldn't be easy to read
            if (nw == rightRotation(orig)) {
                break;
            }
        }
        else if (i == 2) {
            vector<vector<char>> t = orig;
            for (int j = 0; j < 2; j++) {
                t = rightRotation(t);
            }
            if (nw == t) {
                break;
            }
        }
        else if (i == 3) {
            vector<vector<char>> t = orig;
            for (int j = 0; j < 3; j++) {
                t = rightRotation(t);
            }
            if (nw == t) {
                break;
            }
        }
        else if (i == 4) { // checked
            if (nw == reflect(orig)) {
                break;
            }
        }
        else if (i==5){
            vector<vector<char>> t = reflect(orig);
            for (int m = 1; m <= 3; m++) {
                t = rightRotation(t);
                if (nw == t) {
                    goto h;
                }
            }
        }
        else if (i == 6) {
            if (orig == nw) {
                break;
            }
        }
    }
    h:;
    fout << i << endl;
    return 0;
}*/