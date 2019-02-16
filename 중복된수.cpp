#pragma warning(disable : 4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int a[10000001] = { 0 };

int main()
{
	int n;

	cin >> n;

	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		int x;
		scanf("%d", &x);
		if ((a[x / 32] & (1 << (x % 32))))
		{
			cout << x << '\n';
			break;
		}
		a[x / 32] |= (1 << (x % 32));
	
	}
}