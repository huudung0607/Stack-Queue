
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
bool check(long long n) {
	map<int, int> mp;
	while (n) {
		int tmp = n % 10;
		mp[tmp]++;
		if (mp[tmp] == 2) {
			return false;
		}
		n /= 10;
	}
	return true;
}
void init() {
	queue<long long> q;
	for (int i = 1; i <= 5; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		long long u = q.front();
		q.pop();
		if (u > 1e9) break;
		if (check(u)) v.push_back(u);
		for (int i = 0; i <= 5; i++) {
			int tmp = u * 10 + i;
			if (check(tmp)){
				q.push(tmp);
			}
		}
	}
}
int main()
{
	init();
	int t;
	cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		cout << upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin()
			, v.end(), l) << endl;
	}
}

