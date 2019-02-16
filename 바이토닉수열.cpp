#include <iostream>
#include <algorithm>
using namespace std;

long long a[1001];
long long dp1[1001];
long long dp2[1001];


int main()
{
	int n;
	int ans1=0, ans2=0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dp1[i] = 1; dp2[i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			if (a[j] < a[i] && dp1[i] < dp1[j] + 1)
				dp1[i] = dp1[j] + 1;
	}

	for (int i = n; i >= 1; i--)
		for (int j = n; j >= i; j--)
			if (a[i] > a[j] && dp2[i] < dp2[j] + 1)
				dp2[i] = dp2[j] + 1;

	long long ans = 0;

	for(int i=1; i<=n; i++)
	ans = max(ans, dp1[i]+dp2[i]-1 );

	cout << ans << '\n';
}