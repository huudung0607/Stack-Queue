
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
	stack<char> st;
	for (char x : s) {
		if (x == '('){
			st.push(x);
		}
		else {
			if (st.empty()) return false;
			st.pop();
		}
	}
	return st.empty();
}
int main()
{
	string s; cin >> s;
	if (check(s)) cout << "YES";
	else cout << "NO";
}

