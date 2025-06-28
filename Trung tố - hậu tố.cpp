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

int uutien(char c) {
	if (c == '(') return 0;
	if (c == '-' || c == '+') return 1;
	if (c == '*' || c == '/') return 2;
}

void solve(string s) {
	stack<char> st;
	string res = "";
	for (char x : s) {
		if (isalpha(x)) {
			res += x;
		}
		else if (x == '(') st.push(x);
		else if (x == ')') {
			while (!st.empty() && st.top() != '(') {
				res += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && uutien(st.top()) >= uutien(x)) {
				res += st.top();
				st.pop();
			}
			st.push(x);
		}
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	cout << res;
}
int main()
{
	string s; cin >> s;
	solve(s);
}
