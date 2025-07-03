
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
int res[1000006];
int a[1000006];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[i] > a[st.top()]){
			res[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		res[st.top()] = -1;
		st.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << res[i] << " ";
	}
}

