#include <iostream>
#include <queue>
#include <stack>
using namespace std;


queue<int> q;
int check[200001] = { 0 };
int cnt[200001] = { 0 };
int from[200001] = { 0 };


int main()
{
	int x, m;

	cin >> x >> m;

	
	q.push(x);
	check[x] = 1;
	cnt[x] = 0;
	from[x] = 0;


	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		if (n - 1 >= 0)
		{
			if (check[n - 1] == 0) {
				q.push(n - 1);
				cnt[n - 1] = cnt[n] + 1;
				check[n - 1] = 1;
				from[n - 1] = n;
			}

		}
		if (n + 1 < 200000)
		{
			if (check[n +1] == 0) {
				q.push(n + 1);
				cnt[n + 1] = cnt[n] + 1;
				check[n + 1] = 1;
				from[n + 1] = n;
			}
		}
		if (2 * n < 200000)
		{
			if (check[2*n] == 0) {
				q.push(2 * n);
				cnt[2 * n] = cnt[n] + 1;
				check[2 * n] = 1;
				from[2 * n] = n;
			}
		}
		
	}
	cout << cnt[m] << '\n';
	stack<int> road;
	
	int k = m;
	while (x != k)
	{
		k = from[k];
		road.push(k);
	}

	while (!road.empty())
	{
		cout << road.top() << ' ';
		road.pop();
	}
	cout << m << '\n';

}