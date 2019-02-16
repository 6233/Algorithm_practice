#include <iostream>
#include <algorithm>
using namespace std;

long long a[100001];
long long dp[100001] = {0};

int main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dp[i] = a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if(dp[i] <dp[i-1]+a[i])
		dp[i] = dp[i - 1] + a[i];
	}


	long long ans = dp[1];
	for (int i = 1; i <= n; i++)
		if (ans < dp[i])
			ans = dp[i];
		cout << ans << '\n';
}