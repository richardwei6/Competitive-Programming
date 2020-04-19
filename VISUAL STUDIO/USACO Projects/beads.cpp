/*
ID: richard154
PROG: beads
LANG: C++
*/
/*
#include <iostream>
#include <fstream>
#include <string>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int N;
string chars;
int main() {
    std::ios::sync_with_stdio(false);
    ofstream fout("beads.out");
    ifstream fin("beads.in");
    fin >> N;
    string chars;
    fin >> chars;
    chars = chars + chars;
    int size = chars.size();
    int left[size + 1][2];
    int right[size + 1][2];
    left[0][0] = 0;
    left[0][1] = 0;
    right[size][0] = 0;
    right[size][1] = 0;
    for (int i = 1; i < size; ++i)
    {
        if (chars[i - 1] == 'r')
        {
            left[i][0] = left[i - 1][0] + 1;
            left[i][1] = 0;
        }
        else if (chars[i - 1] == 'b')
        {
            left[i][1] = left[i - 1][1] + 1;
            left[i][0] = 0;
        }
        else
        {
            left[i][0] = left[i - 1][0] + 1;
            left[i][1] = left[i - 1][1] + 1;
        }
    }
    for (int i = size - 1; i >= 0; --i)
    {
        if (chars[i] == 'r')
        {
            right[i][0] = right[i + 1][0] + 1;
            right[i][1] = 0;
        }
        else if (chars[i] == 'b')
        {
            right[i][1] = right[i + 1][1] + 1;
            right[i][0] = 0;
        }
        else
        {
            right[i][0] = right[i + 1][0] + 1;
            right[i][1] = right[i + 1][1] + 1;
        }
    }
    int maxBeads = 0;
    for (int i = 0; i < size; ++i)
    {
        maxBeads = max(maxBeads, max(left[i][0], left[i][1]) + max(right[i][0], right[i][1]));
    }
    maxBeads = (maxBeads > N ? N : maxBeads);
    fout << maxBeads << "\n";
    return 0;
}*/