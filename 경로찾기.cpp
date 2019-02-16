#include <iostream>
#include <stack>
using namespace std;

int a[105][105] = { 0 };

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= n; k++)
			{
				if (a[j][i] == 0)
					j += 1;
				if (a[j][i] && a[i][k])
					a[j][k] = 1;
			}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}