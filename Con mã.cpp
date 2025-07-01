
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
int d[9][9];
int visited[9][9];
int dx[8] = { -2,-2,-1,-1,1,1,2,2 };
int dy[8] = { -1,1,-2,2,-2,2,-1,1 };
int bfs(int s, int t,int u,int v) {
	queue<pair<int, int>> q;
	q.push({ s,t });
	visited[s][t] = 1;
	d[s][t] = 0;
	while (!q.empty()) {
		pair<int, int> it = q.front();
		q.pop();
		int i = it.first, j = it.second;
		if (i == u && j == v) {
			return d[i][j];
		}	
		for (int k = 0; k < 8; k++) {
			int i1 = i + dx[k];
			int j1 = j + dy[k];
			if (i1 >= 1 && j1 >= 1 && i1 <= 8 && j1 <= 8 && visited[i1][j1] == 0) {
				visited[i1][j1] = 1;
				d[i1][j1] = d[i][j] + 1;
				q.push({ i1,j1 });
			}
		}
	}
	return -1;
}
int main()
{
	int q; cin >> q;
	while (q--) {
		string x, y; cin >> x >> y;
		memset(visited, 0, sizeof(visited));
		memset(d, 0, sizeof(d));
		int dem = 0;
		for (char i = 'a'; i <= 'h'; i++) {
			dem++;
			if (x[0] == i) {
				x[0] = dem + '0';
			}
			if (y[0] == i) {
				y[0] = dem + '0';
			}
		}
		int tmp1 = stoi(x) % 10;
		int tmp2 = stoi(y) % 10;
		int s = stoi(x) / 10;
		int t = tmp1;
		int u = stoi(y) / 10;
		int v = tmp2;
		cout << bfs(s, t, u, v) << endl;
	}
}

