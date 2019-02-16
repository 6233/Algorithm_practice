#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string s;

	cin >> s;


	stack<char> a;
	int mul=1;
	int sum=0;
	

	for (int i = 0; i < s.size();)
	{
		if (a.empty())
		{
			a.push(s[i]);
			if (s[i] == '[')
				mul *= 3;
			else if (s[i] == '(')
				mul *= 2;
			
		}
		else 
		{
			if (a.top() == '[' && s[i] == ']')
			{
					a.pop();
					sum += mul;
					mul /= 3;
					while (!a.empty()) {
						if (a.top() == '[' && s[i + 1] == ']')
						{
							i+=1;
							a.pop();
							mul /= 3;
						}
						else if (a.top() == '(' && s[i + 1] == ')')
						{
							i+=1;
							a.pop();
							mul /= 2;
						}
						else
							break;
					}	
			}
			else if (a.top() == '(' && s[i] == ')')
			{
				a.pop();
				sum += mul;
				mul /= 2;
				while (!a.empty()) {
					if (a.top() == '[' && s[i + 1] == ']')
					{
						i+=1;
						a.pop();
						mul /= 3;
					}
					else if (a.top() == '(' && s[i + 1] == ')')
					{
						i+=1;
						a.pop();
						mul /= 2;
					}
					else
						break;
				}
			}
			else
			{
				a.push(s[i]);
				if (s[i] == '(')
					mul *= 2;
				else if (s[i] == '[')
					mul *= 3;
			}
		}
		i += 1;
	}
	
	if (!a.empty())
		cout << '0' << '\n';
	else
		cout << sum << '\n';

}