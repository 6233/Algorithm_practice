#include <iostream>
using namespace std;

bool disable[10];
int possible(int c)
{
	if (c == 0)
	{
		if (disable[0])
			return 0;
		else
			return 1;
	}
	int len=0;
	while (c > 0) {
		if (disable[c % 10])
			return 0;
		len += 1;
		c /= 10;
	}
	return len;
}

int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int dis;
		cin >> dis;
		disable[dis] = true;
	}

	int ans = x - 100;
	if(ans<0)
	{
		ans = -ans;
	}

	for (int i = 0; i <= 1000000; i++)
	{
		int c = i;
		int len = possible(c);
		if (len > 0)
		{
			int press = c - x;
			if (press < 0) {
				press = -press;
			}
			if (ans > len + press)
				ans = len + press;
		}
	}
	cout << ans << '\n';
}