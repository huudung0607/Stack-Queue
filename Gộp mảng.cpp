
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
	int n; cin >> n;
	vector<int> a(n);
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; pq.push(a[i]);
	}
	long long sum = 0;
	while (pq.size() > 1) {
		long long a = pq.top(); pq.pop();
		long long b = pq.top(); pq.pop();
		long long t = a + b;
		sum += t;
		pq.push(t);
	}
	cout << sum << " " << pq.top();
}

