#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class person {
public:
	int age;
	string name;

};
bool cmp(const pair<int, string> &u, const pair<int, string> &v)
{
	return u.first < v.first;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> a(n);


	for (int i = 0; i < n; i++)
	{
		cin >>a[i].first >> a[i].second;
	}

	stable_sort(a.begin(), a.end(), cmp);

	for (auto &p : a)
	{
		cout << p.first << ' ' << p.second << '\n';
	}

}

