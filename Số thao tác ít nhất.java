
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

int bfs(int n) {
	queue<pair<int, int>> q;
	q.push({ n,0 });
	set<int> se;
	se.insert(n);
	while (!q.empty()) {
		pair<int, int> x = q.front();
		q.pop();
		if (x.first == 1) {
			return x.second;
		}
		int num = x.first;
		if (num % 2 == 0 && se.count(num / 2) == 0) {
			q.push({ num / 2 , x.second + 1 });
			se.insert(num / 2);
		}
		if (num % 3 == 0 && se.count(num / 3) == 0) {
			q.push({ num / 3,x.second + 1 });
			se.insert(num / 3);
		}
		if (num % 5 == 0 && se.count(num / 5) == 0) {
			q.push({ num / 5,x.second + 1 });
			se.insert(num / 5);
		}
		if (num > 1 && se.count(num - 1) == 0) {
			q.push({ num - 1,x.second + 1 });
			se.insert(num - 1);
		}
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << bfs(n) << endl;
	}
}

