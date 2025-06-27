
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
	queue<int> q;
	while (t--) {
		string s; cin >> s;
		if (s == "PUSH") {
			int x; cin >> x;
			q.push(x);
		}
		else if (s == "POP") {
			if (!q.empty())q.pop();
			else continue;
		}
		else if (s == "PRINTFRONT") {
			if (!q.empty()) cout << q.front() << endl;
			else cout << "NONE" << endl;
		}
	}
}

