#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int n;
	cin >> n;
	
	int s[101];

	while (n--)
	{
		long long sum = 0;
		int k;
		cin >> k;
		if (k == 1)
			cin >> sum;
		else 
		{
			for (int i = 0; i < k; i++)
			{
				cin >> s[i];
			}
			for (int i = 0; i < k - 1; i++) {
				for (int j = i + 1; j < k; j++)
					sum += gcd(s[i], s[j]);
			}
		}
		cout << sum << '\n';

	}

}