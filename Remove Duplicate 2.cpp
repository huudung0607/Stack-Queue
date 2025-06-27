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

void remove(string s, int k) {
	stack<pair<char, int>> st;
	for (char x : s) {
		if (!st.empty() && st.top().first == x) {
			st.top().second++;
			if (st.top().second == k) {
				st.pop();
			}
		}
		else st.push({ x,1 });
	}
	string res = "";
	while (!st.empty()) {
		res = string(st.top().second, st.top().first) + res;
		st.pop();
	}
	cout << res;
}

int main() {
	string s; int k;
	cin >> s >> k;
	remove(s, k);
}
