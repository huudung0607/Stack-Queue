
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
#include <cstring>
using namespace std;
int a[1005][1005];
int d[1005][1005];
int visited[1005][1005];
int n, m;
int	bfs(int u, int v) {
	queue<pair<int, int>> q;
	q.push({ 1,1 });
	d[1][1] = 0;
	visited[1][1] = 1;
	while (!q.empty()) {
		pair<int, int> x = q.front();
		q.pop();
		int i = x.first, j = x.second;
		if (i == u && j == v) {
			return d[i][j];
		}
		int i1 = i;
		int j1 = j + a[i][j];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] == 0) {
			visited[i1][j1] = 1;
			d[i1][j1] = d[i][j] + 1;
			q.push({ i1,j1 });
		}
		int i2 = i + a[i][j];
		int j2 = j;
		if (i2 >= 1 && i2 <= n && j2 >= 1 && j2 <= m && visited[i2][j2] == 0) {
			visited[i2][j2] = 1;
			d[i2][j2] = d[i][j] + 1;
			q.push({ i2,j2 });
		}
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(visited, 0, sizeof(visited));
		memset(d, 0, sizeof(d));
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		cout << bfs(n, m) << endl;
	}
}

