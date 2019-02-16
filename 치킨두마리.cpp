#include <iostream>
using namespace std;

int main()
{
	long long a;
	long long b;
	long long c;
	cin >> a >> b >> c;

	if (a +b>= 2 * c)
	{
		
		cout << a + b-2*c << '\n';
	}

	else
		cout << a + b << '\n';

}
