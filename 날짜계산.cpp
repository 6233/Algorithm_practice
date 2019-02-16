#include <iostream>
using namespace std;

int main()
{

	int e, s, m;
	cin >> e >> s >> m;
	int i=1, j=1, k=1;
	int cnt = 1;
	int ans = 1;
	while (ans)
	{

		if (i == e && j == s && k == m)
		{
			break;
		}
		i++; j++; k++;
		if (i > 15)
			i = 1;
		if (j > 28)
			j = 1;
		if (k > 19)
			k = 1;

		cnt++;
	}
	cout << cnt << '\n';
}