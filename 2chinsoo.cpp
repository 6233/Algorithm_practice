#include <iostream>
using namespace std;

long long dp[91][2];

int main()
{
	dp[1][0] = { 0 };
	dp[1][1] = { 1 };
	int n;
	cin >> n;

	long long ans = 0;

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}

	ans = dp[n][0] + dp[n][1];

	cout << ans << '\n';

}