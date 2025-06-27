
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
	int n;
	cin >> n;
	queue<int> q;
	while (n--) {
		int t; cin >> t;
		if (t == 1) {
			cout << q.size() << endl;
		}
		else if (t == 2) {
			if (q.empty()) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
		else if (t == 3) {
			int x; cin >> x;
			q.push(x);
		}
		else if (t == 4) {
			if (!q.empty()) {
				q.pop();
			}
			else continue;
		}
		else if (t == 5) {
			if (!q.empty())cout << q.front() << endl;
			else cout << -1 << endl;
		}
		else if (t == 6) {
			if (!q.empty()) cout << q.back() << endl;
			else cout << -1 << endl;
		}
	}
}

