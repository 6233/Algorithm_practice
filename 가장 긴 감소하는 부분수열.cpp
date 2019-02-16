#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int dp[1001];

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dp[i] = 1;
	}

	int ans = 0;
	
	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j >= i; j--)
		{
			if (a[i] > a[j] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
			ans = max(ans, dp[i]);
		}
	}
	cout << ans << '\n';

}