
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

int main()
{
	string s; cin >> s;
	stack<char>st;
	for (auto x : s) {
		if (x == '(') {
			st.push(x);
		}
		else {
			if (!st.empty() && st.top() == '(') {
				st.pop();
			}
			else st.push(x);
		}
	}
	int l = 0, r = 0;
	while (!st.empty()) {
		if (st.top() == '(') l++;
		else r++;
		st.pop();
	}
	int res = (l + 1) / 2 + (r + 1) / 2;
	cout << res;
}

