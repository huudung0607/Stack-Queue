
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
	int t; cin >> t;
	deque<int> d;
	while (t--) {
		string s; cin >> s;
		if (s == "PUSHBACK") {
			int x; cin >> x; d.push_back(x);
		}
		else if (s == "PUSHFRONT") {
			int x; cin >> x;
			d.push_front(x);
		}
		else if (s == "PRINTBACK") {
			if (!d.empty())cout << d.back() << endl;
			else cout << "NONE" << endl;
		}
		else if (s == "PRINTFRONT") {
			if (!d.empty()) cout << d.front() << endl;
			else cout << "NONE" << endl;
		}
		else if (s == "POPBACK") {
			if (!d.empty()) d.pop_back();
			else continue;
		}
		else if (s == "POPFRONT") {
			if (!d.empty()) d.pop_front();
			else continue;
		}
	}
}

