#include <iostream>
using namespace std;

int s[10];
int main()
{
	for (int i = 1; i <= 9; i++)
		cin >> s[i];

	int k = 0, y = 0;

	for (int i = 1; i <= 9; i++)
	{
		if (s[k] < s[i]) {
			y = s[i]; k = i;

		}
	}

	cout << y <<'\n';
		cout << k << '\n';
}