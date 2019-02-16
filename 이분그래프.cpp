#include <iostream>
#include <vector>
using namespace std;

vector<int> a[20001];
bool check[20001];

void dfs(int node)
{
	check[node] = true;
	for (int i = 0; i < a[node].size(); i++)
	{
		int next = a[node][i];
		if (check[next] == 0)
			dfs(next);
	}
}
int amin()
{
	int n, m;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		memset(a, false, sizeof(a));
		memset(check, false, sizeof(check));
		for (int j = 0; j < m; j++)
		{
			int u, v;
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);

		}
	}
}