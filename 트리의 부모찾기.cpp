#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

queue<int> q;
int check[100001] = {0};
vector<int> a[100001];

void bfs()
{
	q.push(1);
	while (!q.empty()) {
		int next = q.front();
		q.pop();
		for (int i = 0; i < a[next].size(); i++) {
			int y = a[next][i];
			if (check[y] == 0) {
				check[y] = next;
				q.push(y);
			}
			
		}

	}
	
}


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n-1; i++)
	{
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}



			bfs();
		

		for (int i = 2; i <= n; i++)
			cout << check[i] << '\n';
}