#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
class table {
public:
	int start;
	int end;
};

bool cmp(const table &u, const table &v)
{
	if (u.end == v.end)
		return u.start < v.start;
	else
		return u.end < v.end;
}

int main()
{
	int n;
	cin >> n;
	vector<table> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].start >> a[i].end;
	}

	sort(a.begin(), a.end(), cmp);

	int now=0;
	int ans=0;
	for (int i = 0; i < a.size(); i++)
	{
		if (now <= a[i].start)
		{
			now = a[i].end;
			ans++;
		}
	}

	cout << ans << '\n';
}