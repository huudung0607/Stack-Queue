
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
int l[1000006];
int r[1000006];
int a[1000006];
int idx[1000006];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[i] <= a[st.top()]) st.pop();
		if (!st.empty()) l[i] = st.top();
		else l[i] = -1;
		st.push(i);
	}
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && a[i] <= a[st.top()])st.pop();
		if (!st.empty()) r[i] = st.top();
		else r[i] = n;
		st.push(i);
	}
	long long maxval = 0;
	for (int i = 0; i < n; i++) {
		int val = r[i] - l[i] - 1;
		long long area = 1ll * a[i] * val;
		maxval = max(maxval, area);
	}
	cout << maxval;
}

