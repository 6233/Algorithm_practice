#include <iostream>
using namespace std;
long long mod = 1000000000;
long long dp[101][10] = {0};

int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;
	
	for (int j = 2; j <= n; j++)
	{
		for (int k = 0; k <= 9; k++)
		{
			if (k - 1 >= 0)
				dp[j][k] += dp[j - 1][k - 1];
			if (k + 1 <= 9)
				dp[j][k] += dp[j - 1][k + 1];
			dp[j][k] %= mod;
		}
	}

	for (int i = 0; i <= 9; i++)
		ans += dp[n][i];

	cout << ans%mod << '\n';

}