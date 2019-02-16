#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int b[1001];

int main()
{
	int n;
	cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		for (int j = 0; j < n; j++)
		{
			cin >> b[j];
		}
		sort(a, a + n);
		sort(b, b + n);

		int k = n;
		int x=0, y=0;

		if (b[n - 1] == 0) {
			cout << "Yes" << '\n';
			return 0;
		}
		while (k--)
		{
			while (b[y] == 0 && y < n - 1)
				y++;
			while (a[x] == 0 && x < n - 1)
				x++;
			if (a[x] == b[y] && x < n - 1 && y < n - 1)
			{
				x++; y++;
			}
			if(y==n-1)
				for (; x<=y; x++)
					if (b[y] == a[x])
					{
						cout << "Yes" << '\n';
						return 0;
					}
		

			if (y >=x) {
				for (; x <= y; x++)
					if (b[y] > a[x])
					{
						cout << "No" << '\n';
						return 0;
					}
			}
			if(a[x]!=b[y])
			{
				cout << "No" << '\n';
				return 0;
			}
		}
		cout << "Yes" << '\n';
}