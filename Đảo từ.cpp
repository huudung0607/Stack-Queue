
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
	string s;
	stack<string>st;
	while (cin >> s) {
		st.push(s);
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();

	}
}

