#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int ans = 0;
	int n;
	cin >> n;
	int k = 1;
	for (int i = 1; i <= s.size(); i++)
	{
		if (s[s.size() - i] >= 'A')
			s[s.size() - i] -= 55;
		else if (s[s.size() - i] >= '0')
			s[s.size() - i] -= 48;
		ans += (int)s[s.size()-i]*k;
		k = k*n;
	}
	cout << ans << '\n';

}