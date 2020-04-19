/*#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

int trace(vector<vector<int>>a) { // sum of diagonals
    int o = 0;
    for (int i = 0; i < a.size(); i++) {
        o += a[i][i];
    }
    return o;
}

int row(vector<vector<int>> a) {
    int o = 0;
    for (int i = 0; i < a.size(); i++) { // for each row
        set<int> n; // passed nums
        for (int j = 0; j < a.size(); j++) {
            if (n.count(a[i][j])) { // num found
                o++;
                break;
            }
            else {
                n.insert(a[i][j]);
            }
        }
    }
    return o;
}

int column(vector<vector<int>> a) {
    int o = 0;
    for (int i = 0; i < a.size(); i++) { // for each column
        set<int> n;
        for (int j = 0; j < a.size(); j++) {
            if (n.count(a[j][i])) {
                o++;
                break;
            }
            else {
                n.insert(a[j][i]);
            }
        }
    }
    return o;
}


int main() {
    int t;
    cin >> t;
    for (int c = 1; t--; c++) { // for each test case
        vector<vector<int>> a;
        int s;
        cin >> s;
        for (int i = 0; i < s; i++) {
            vector<int> temp;
            string current;
            for (int j = 0; j < s; j++) {
                cin >> current;
                temp.push_back(stoi(current));
            }
            a.push_back(temp);
        }
        cout << "Case #" << c << ": " << trace(a) << " " << row(a) << " " << column(a) << endl;
    }
    return 0;
}*/