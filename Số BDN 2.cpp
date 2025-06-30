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
	q.push(1);
	while (!q.empty()) {
		long long u = q.front();
		q.pop();
		if (u > 3e18) break;
		v.push_back(u);
		q.push(u * 10);
		q.push(u * 10 + 1);
	}
}
int main() {
	init();
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		for (auto x : v) {
			if (x % n == 0) {
				cout << x;
				break;
			}
		}
		cout << endl;
	}
}
