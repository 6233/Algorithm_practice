#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> a;

int main()
{
	int n;
	cin >> n;

	int x;
	while (n--)
	{
		string str;
		cin>> str;
		if (str == "push_back")
		{
			cin >> x;
			a.push_back(x);
		}
		else if (str == "push_front") {
			cin >> x;
			a.insert(a.begin(), x);
		}
		else if (str == "front")
		{
			if (a.empty())
				cout << -1 << '\n';
			else
				cout << a.front() << '\n';
		}
		else if (str == "back")
		{
			if (a.empty())
				cout << -1 << '\n';
			else
				cout << a.back() << '\n';
		}
		else if (str == "size")
		{
			cout << a.size() << '\n';
		}
		else if (str == "empty")
			cout << a.empty() << '\n';
		else if (str == "pop_front")
		{
			if (a.empty())
				cout << -1 << '\n';
			else {
				cout << a.front() << '\n';
				a.erase(a.begin());
			}
		}
		else if (str == "pop_back")
		{
			if (a.empty())
				cout << -1 << '\n';
			else {
				cout << a.back() << '\n';
				a.pop_back();
			}
		}
	}
}