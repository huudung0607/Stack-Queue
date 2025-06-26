
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
typedef pair<int, int> ii;
int bfs(int s) {
	queue<ii> q;
	q.push({ s,0 });
	set<int> se;
	se.insert(s);
	while (!q.empty()) {
		ii x = q.front();
		q.pop();
		if (x.first == 1) {
			return x.second;
		}
		int num = x.first;
		if (num > 1 && se.count(num - 1) == 0) {
			q.push({ num - 1, x.second + 1 });
			se.insert(num - 1);
		}
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0 ) {
				int tmp = num/ i;
				if (se.count(tmp) == 0) {
					se.insert(tmp);
					q.push({ tmp,x.second + 1 });
				}
			}
		}
	}
	return -1;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int s; cin >> s;
		cout << bfs(s) << endl;
	}
}

