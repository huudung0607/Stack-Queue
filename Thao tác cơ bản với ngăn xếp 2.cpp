
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
	int t;
	cin >> t;
	cin.ignore();
	stack<int> st;
	while (t--) {
		string s; cin >> s;
		if (s == "push") {
			int x; cin >> x;
			st.push(x);
		}
		else if (s == "top") {
			if (st.empty()) cout << "NONE" << endl;
			else cout << st.top() << endl;
		}
		else if (s == "pop") {
			if (st.empty()) continue;
			else st.pop();
		}
	}
}

