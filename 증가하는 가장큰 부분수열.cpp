#include <iostream>
#include <algorithm>
using namespace std;

long long a[1001];
long long dp[1001];

int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++)
	{
		dp[i] = a[i];
		for(int j = 1; j <= i; j++)
		{
			if (a[j] < a[i] && dp[i] < dp[j] + a[i])
				dp[i] = dp[j] + a[i];
			ans = max(ans, dp[i]);
		}
	}
	cout << ans << '\n';
}