#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

queue<int> a;

int main()
{
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		a.push(i);

	cout << "<";
	while (--n)
	{
		for (int i = 1; i < m; i++)
		{
			a.push(a.front());
			a.pop();
		}
		printf("%d, ", a.front());
		a.pop();
	}
	printf("%d>", a.front());

}