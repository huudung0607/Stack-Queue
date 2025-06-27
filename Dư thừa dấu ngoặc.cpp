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

bool check(string s) {
	stack<char>st;
	for (char x : s) {
		if (x == ')') {
			bool ok = false;
			while (!st.empty() && st.top() != '(') {
				char tmp = st.top();
				st.pop();
				if (tmp == '-' || tmp == '+' || tmp == '*' || tmp == '/') {
					ok = true;
				}
			}
			if (!st.empty()) st.pop();
			if (!ok) return true;
		}
		else st.push(x);
	}
	return false;
}
int main() {
	string s; cin >> s;
	if (check(s)) cout << "YES";
	else cout << "NO";
}
