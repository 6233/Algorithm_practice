#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for (int j = 0; j < n; j++) {
		int i;
		string s;
		cin >> s;
		i = s[s.size() - 1] - 48;

		if (i % 2 == 0)
			cout << "even" << '\n';
		else
			cout << "odd" << '\n';
	}
	return 0;

}