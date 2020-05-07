
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
#include <sstream>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

struct node {
	string name;
	vector<node*> child;
};

vector<node*> trees;

node* newNode(string name) {
	node* t = new node;
	t->name = name;
	return t;
}


node* findNodeTree(string name, node* tree) {
	if (tree->name == name) {
		return tree;
	}
	for (auto i : tree->child) {
		auto a = findNodeTree(name, i);
		if (a != NULL) {
			return a;
		}
	}
	return NULL;
}

node* findNode(string name) {
	for (node* i : trees) { // for each diff tree
		auto a = findNodeTree(name, i);
		if (a != NULL) {
			return a;
		}
	}
	return NULL;
}

string stolower(string s) {
	for (auto& i : s)
		i = tolower(i);
	return s;
}

int maxDepth(node* t) {
	if (t == NULL) {
		return 0;
	}
	int m = 0;
	for (auto i : t->child) {
		m = max(m, maxDepth(i)+1);
	}
	return m;
}

int maxDepthAll() {
	int m = 0;
	for (auto i : trees) {
		m = max(m, maxDepth(i));
	}
	return m;
}


void solve() {
	int n;
	cin >> n;
	vector<vector<string>> a; // vectors of pairs of strings
	for (; n--;) {
		string x ,y, z;
		cin >> x >> y >> z;
		x = stolower(x);
		z = stolower(z);
		auto f = findNode(z);
		if (f == NULL) { // create new tree
			node* t = newNode(z);
			t->child.push_back(newNode(x));
			trees.push_back(t);
		}
		else {
			f->child.push_back(newNode(x)); // add child to existing node
		}
	}
	cout << maxDepthAll()+1 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
