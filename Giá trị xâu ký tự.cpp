
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
	while (t--) {
		int n; string s;
		cin >> n >> s;
		map<char, int> mp;
		for (auto x : s) mp[x]++;
		priority_queue<int> q;
		for (auto x : mp) {
			q.push(x.second);
		}
		while (n-- && !q.empty()) {
			int x = q.top();
			q.pop();
			if (x > 1) q.push(x - 1);
		}
		long long ans = 0;
		while (!q.empty()) {
			ans += 1ll * q.top() * q.top();
			q.pop();
		}
		cout << ans << endl;
	}
}

