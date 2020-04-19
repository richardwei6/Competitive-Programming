/*
ID: richard154
PROG: namenum
LANG: C++
*/
/*
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;

ofstream fout("namenum.out");
ifstream fin("namenum.in");

unordered_set<string> dict;
vector<string> dial{ "","", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY" };
long long t = 0; // times of words displayed

void printPossibleComb(vector<int> n, int currdigit, string output) { // n is size(n)
    if (currdigit == n.size()) { // break recursive
        if (dict.count(output)) {
            t++;
            fout << output << endl;
        }
        return;
    }
    for (int i = 0; i < 3; i++) {
        output[currdigit] = dial[ n[currdigit] ][i];
        printPossibleComb(n, currdigit + 1, output);
        if (n[currdigit] == 0 || n[currdigit] == 1) {
            return;
        }
    }
}

void printFunc(vector<int> n) {
    char r[n.size() + 1];
    r[n.size()] = '\0';
    printPossibleComb(n, 0, r);
}

int main() {
    std::ios::sync_with_stdio(false);
    ifstream din("dict.txt");

    while (!din.eof()) {
        string name;
        din >> name;
        dict.insert(name);
    }

    long long num;
    fin >> num;

    vector<int> n;
    while (num) {
        n.push_back(num % 10);
        num /= 10;
    }
    reverse(begin(n), end(n));


    printFunc(n);
    

    if (t == 0) {
        fout << "NONE" << endl;
    }

    return 0;
}*/