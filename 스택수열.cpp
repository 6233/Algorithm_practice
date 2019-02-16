#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	stack<int> s;
	string str;
	int base[100001];

	for (int i = 0; i < n; i++)
		cin >> base[i];
	
	int now = 0;
	int end = str.size();
	while (!s.empty())
	{
		if(s.top()<base[now])
		for (int j = s.top(); j <= base[now]; j++)
		{
			s.push(j);
			str+= '+';
		}
		if (s.top() == base[now])
			s.pop();
		else {
			cout << "false" << '\n';
			return 0;
		}

		now++;
	}
	
	for (int i = 0; i < end; i++)
		cout << base[i] << '\n';

	
}