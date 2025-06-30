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
vector<long long> v;
void init() {
	queue<long long> q;
	q.push(6);
	q.push(8);
	while (!q.empty()) {
		long long u = q.front();
		q.pop();
		if (u > 1e18) break;
		v.push_back(u);
		q.push(u * 10 + 6);
		q.push(u * 10 + 8);
	}
}
int main() {
	init();
	int t; cin >> t;
	sort(v.begin(), v.end(), greater<long long>());
	while (t--) {
		int u; cin >> u;
		for (long long x : v) {
			string s = to_string(x);
			if (s.size() <= u) {
				cout << x << " ";
			}
		}
		cout << endl;
	}
}
