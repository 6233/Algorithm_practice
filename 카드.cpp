#include <iostream>
#include <algorithm>
using namespace std;


long long s[1000001] = { 0 };
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <n ; i++)
	{
		cin >> s[i];
	}

	sort(s, s+n);

	long long ans = s[0];
	int ans_cnt = 1;
	int cnt=1;

	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
		{
			cnt++;
		}
		else
			cnt = 1;
		if (ans_cnt < cnt)
		{
			ans_cnt = cnt;
			ans = s[i];
		}
	}



	cout << ans << '\n';

}