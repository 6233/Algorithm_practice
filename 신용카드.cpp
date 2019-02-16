#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
	int n;

	cin >> n;

	while (n--)
	{
		int a[17];
		int sum = 0;
		for (int i = 0; i <= 15; i++)
		{
			scanf_s("%1d", &a[i]);
			if (i % 2 == 0) {
				a[i] *= 2;

				if (a[i] >= 10)
				{
					a[i] = 1 + (a[i] % 10);
				}
			}
			sum += a[i];
		}

		if ((sum%10)  == 0){
			cout << "T" << '\n';
		}
		else
			cout << "F" << '\n';

	}

}