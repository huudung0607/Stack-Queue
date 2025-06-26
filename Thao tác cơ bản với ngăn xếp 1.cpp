
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
		string s;
		cin >> s;
		if (s == "show") {
			if (st.empty()) {
				cout << "EMPTY" << endl;
			}
			else {
				stack<int> tmp = st;
				vector<int> v;
				while (!tmp.empty()) {
					v.push_back(tmp.top());
					tmp.pop();
				}
				reverse(v.begin(), v.end());
				for (auto x : v) cout << x << " ";
				cout << endl;
			}
		}
		else if (s == "push") {
			int x; cin >> x;
			st.push(x);
		}
		else if (s == "pop") {
			if (!st.empty()) st.pop();
		}
	}
}

