#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class student {
public:
	string name;
	int kor;
	int eng;
	int math;
};

bool cmp(const student &u, const student &v)
{
	if (u.kor != v.kor)
		return u.kor > v.kor;
	else if (u.eng != v.eng)
		return u.eng < v.eng;
	else if (u.math != v.math)
		return u.math > v.math;
	else
	{
		for (int i = 0; i < min(u.name.size(), v.name.size()); i++)
			if (u.name[i] != v.name[i])
				return u.name[i] < v.name[i];
	}

}

int main()
{
	int n;

	cin >> n;

	vector<student> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math;
	}

	stable_sort(a.begin(), a.end(), cmp);
		
	for (auto &p : a)
	{
		cout << p.name << '\n';
	}		
}