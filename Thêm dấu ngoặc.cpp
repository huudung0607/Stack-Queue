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
int check(string s) {
	stack<char> st;
	for (char x : s) {
		if (x == '(') {
			st.push(x);
		}
		else if (x == ')') {
			if (!st.empty() && st.top() == '(') {
				st.pop();
			}
			else st.push(x);
		}
	}
	return st.size();
}
int main()
{
	string s; cin >> s;
	cout << check(s);
}
