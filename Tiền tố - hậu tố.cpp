
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
	stack<string> st;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (isalpha(s[i])) {
			st.push(string(1, s[i]));
		}
		else {
			string a1 = st.top();
			st.pop();
			string a2 = st.top();
			st.pop();
			string tmp = a1 + a2 + s[i];
			st.push(tmp);
		}
	}
	cout << st.top();
}
int main()
{
	string s; cin >> s;
	solve(s);
}

