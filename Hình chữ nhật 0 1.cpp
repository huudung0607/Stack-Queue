
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

int recArea(vector<int> v) {
	stack<int> st;
	v.push_back(0);
	int maxarea = 0;
	for (int i = 0; i < v.size(); i++) {
		while (!st.empty() && v[i] < v[st.top()]) {
			int h = v[st.top()];
			st.pop();
			int w = 0;
			if (st.empty()){
				w = i;
			}
			else {
				w = i - st.top() - 1;
			}
			maxarea = max(maxarea, h * w);
		}
		st.push(i);
	}
	return maxarea;
}
int a[505][505];
int main()
{
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	vector<int> v(m, 0);
	int maxarea = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				v[j] = 0;
			}
			else v[j]++;
		}
		maxarea = max(maxarea, recArea(v));
	}
	cout << maxarea;
}

