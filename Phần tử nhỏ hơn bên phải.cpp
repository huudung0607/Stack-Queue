
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
int res2[1000006];
int a[1000006];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		res[i] = -1;
		res2[i] = -1;
	}
	stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) res[i] = st.top();
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) res2[i] = st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++) {
        if (res[i] != -1 && res2[res[i]] != -1) {
            cout << a[res2[res[i]]] << " ";
        }
        else {
            cout << -1 << " ";
        }
    }
}

