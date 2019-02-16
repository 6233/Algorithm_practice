#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	int sum = 0;
	int v = 1;
	for (int i = s.size()-1; i >=0; i--)
	{
		if (s[i] >= 'A' && s[i]<='F')
			s[i]=s[i] - 'A'+10;
		else if (s[i] >= 0)
			s[i] = s[i]-'0';
		sum+=s[i] * v;
		v *= 16;
	}
	cout << sum << '\n';
}