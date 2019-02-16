#include <iostream>
#include <cstdio>
using namespace std;

int s[100001];

int main()
{
	int n, b;

	cin >> n >> b;
	

	int i = 0;

	while (n >= b)
	{	
		int x;
		x = n%b;
		s[i] = x;
		i++;
		n = n / b;
	}
	if (n >= 10)
		printf("%c", n + 55);
	else
		cout << n;
	for(int j=i-1; j>=0; j--)
	if (s[j] >= 10)
		printf("%c",s[j]+55);
	else
	cout << s[j];
	cout << '\n';
}
