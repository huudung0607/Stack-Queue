#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

void remove(string s) {
	stack<char> st;
	for (char x : s) {
		if (!st.empty() && st.top() == x) {
			st.pop();
		}
		else st.push(x);
	}
	if (st.empty()) {
		cout << "EMPTY";
		return;
	}
	vector<char> v;
	while (!st.empty()) {
		v.push_back(st.top());
		st.pop();
	}
	reverse(v.begin(), v.end());
	for (char x : v) {
		cout << x;
	}
}


int main() {
	string s; cin >> s;
	remove(s);
}

