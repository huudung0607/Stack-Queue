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
void solve(string s) {
	stack<int> st;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (isdigit(s[i])) {
			st.push(s[i] -'0');
		}
		else {
			int n1 = st.top(); st.pop();
			int n2 = st.top(); st.pop();
			if (s[i] == '/') st.push(n1 / n2);
			else if (s[i] == '-') st.push(n1 - n2);
			else if (s[i] == '*') st.push(n1 * n2);
			else if (s[i] == '+') st.push(n1 + n2);
		}
	}
	cout << st.top();
}
int main()
{
	string s; cin >> s;
	solve(s);
}
