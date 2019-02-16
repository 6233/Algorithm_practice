#include <iostream>
#include <algorithm>
using namespace std;

long long a[100001][2];
long long dp[100001][3] = {0};

int main()
{
	int n, m;
	cin >> n;

	while (n--)
	{
		cin >> m;
		for (int i = 1; i <= m; i++)
			cin >> a[i][0];
		for (int i = 1; i <= m; i++)
			cin >> a[i][1];

		for (int i = 1; i <= m; i++)
		{
			dp[i][0]= max(dp[i-1][0],max( dp[i-1][1], dp[i-1][2]));
			dp[i][1]= max(dp[i-1][0],dp[i-1][2])+a[i][0];
			dp[i][2]= max(dp[i-1][0],dp[i-1][1])+a[i][1];
		}
		cout << max(dp[m][0], max(dp[m][1], dp[m][2])) << '\n';

	}
}