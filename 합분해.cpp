#include <iostream>
using namespace std;

long long dp[205][205];

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i <= n; i++)
		dp[1][i] = 1;

	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j <= n; j++) {
			for (int m = 0; m <= j; m++) {
				dp[i][j] += dp[i - 1][j - m] % 1000000000;
			
			}
		}
	}


	cout << dp[k][n] << '\n';
}