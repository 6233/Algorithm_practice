#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		x = i;
		do {
			ans++;
			x /= 10;
		} while (x > 0);
		
	}
	cout << ans << '\n';
}