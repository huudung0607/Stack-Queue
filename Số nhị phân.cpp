
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
int n;
void init() {
	int cnt = 0;
	queue<long long> q;
	q.push(1);
	while (!q.empty()) {
		long long u = q.front();
		q.pop();
		if (u > 1e18) break;
		v.push_back(u);
		q.push(u * 10 + 1);
		q.push(u * 10 + 0);
	}
}
int main()
{
	cin >> n;
	init();
	int dem = 0;
	sort(v.begin(), v.end());
	for (auto x : v) {
		if (dem != n) {
			dem++;
			cout << x << " ";
		}
	}
}

