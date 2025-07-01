
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


bool isprime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}


void change(int s, int t) {
	queue<pair<int, int>> q;
	vector<bool> visited(10000, 0);
	q.push({ s,0 });
	visited[s] = 1;
	while (!q.empty()) {
		int v = q.front().first;	
		int c = q.front().second;
		q.pop();
		if (v == t) {
			cout << c << endl;
			break;
		}
		string x = to_string(v);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 10; j++) {
				if (i == 0 && j == 0) continue;
				if (j == x[i] - '0') continue;
				string tmp = x;
				tmp[i] = '0' + j;
				int a = stoi(tmp);
				if (isprime(a) && !visited[a]) {
					q.push({ a,c + 1 });
					visited[a] = 1;
				}
			}
		}
	}
}

int main()
{
	int q;
	cin >> q;
	while (q--) {
		int s, t; cin >> s >> t;
		change(s, t);
	}
}

