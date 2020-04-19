/*#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;




string createP(int a) {
	string b, e;
	for (int i = 0; i < a; i++) {
		b += "(";
		e += ")";
	}
	return b + to_string(a) + e;
}

string R(string a, int i) {
	int n = a[i] - '0';
	a.erase(begin(a) + i - n, begin(a) + i + n + 1);
	return a;
}

int main() {
	int t;
	cin >> t;
	for (int c = 1; t--; c++) {
		string a;
		cin >> a;
		for (int i = 0; i < a.size(); i++) {
			if (isdigit(a[i])) {
				string r = createP(a[i] - '0');
				a.replace(i, 1, r);
				i = r.size() + i - 1;
			}
		}

		//cout << a << endl;

		// add adj elements
		for (int i = 0; i < a.size(); i++) {
			if (isdigit(a[i]) && a[i]-'0' != 0) {
				
				for (int j = i + 1; j < a.size(); j++) { // right num
					if (isdigit(a[j])) {
						if (a[j] - '0' > a[i] - '0') {

							a.insert(j - (a[j] - a[j]) - 1, 1, a[i]);

							a = R(a, i);

							//cout << "new pos at - " << j << endl;
							i = j;
							break;
						}
						else {
							// adj num not big enough
							break;
						}
					}
				}

				for (int j = i - 1; j > -1; j--) {
					if (isdigit(a[j])) {
						if (a[j] - '0' < a[i] - '0') {

							a.insert(j - (a[j] - a[j]) - 1, 1, a[i]);

							a = R(a, i);

							cout << "new pos at - " << j << endl;
							i = j;
							break;
						}
						else {
							// adj num not big enough
							break;
						}
					}
				}




			}
		}

		cout << "Case #" << c << ": " << a << endl;
	}
	return 0;
}*/