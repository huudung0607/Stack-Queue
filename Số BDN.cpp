
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

int main() {
	int t; cin >> t;
	vector<long long> v;
	queue<long long> q;
	q.push(1);
	while (q.front() < 1e18) {
		v.push_back(q.front());
		q.push(q.front() * 10 + 0);
		q.push(q.front() * 10 + 1);
		q.pop();
	}
	while (t--) {
		long long n; cin >> n;
		cout << lower_bound(v.begin(), v.end(), n) - v.begin() << endl;
	}
}
