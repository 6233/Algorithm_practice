#include <iostream>
#include <string>
#include <cstdio>
#pragma warning(disable: 4996)
using namespace std;

int a[5001];
int dp[5001];

int main()
{
	string s;

	cin >> s;
	
	int len = s.length();

	for (int i = 1; i <= len; i++)
	{
		a[i] = s[i-1]-'0';
	}


	dp[0] = 1;

	if (len==1&&s[0] == 0)
		cout << 0 << '\n';
	else
	{
		
		for (int i = 1; i <= len; i++)
		{
			if (a[i] >= 1 && a[i] <= 9)
				dp[i] = (dp[i - 1] + dp[i]) % 1000000;
			if (i == 1)
				continue;

			int num = a[i] + a[i - 1] * 10;
			if (10 <= num && num <= 26)
				dp[i] = (dp[i - 2] + dp[i]) % 1000000;

		}
		cout << dp[len] << '\n';

	}

	

}