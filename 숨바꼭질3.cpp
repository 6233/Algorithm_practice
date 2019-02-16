#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


bool check[100001];

void go(int from, int to)
{
	queue<pair<int, int>> q;
	q.push(make_pair(from, 0));
	check[from] = true;
	while (!q.empty())
	{
		pair<int, int> now = q.front();
		q.pop();

		if (now.first < 50000 && check[now.first * 2] != true) {
			q.push(make_pair(now.first * 2, now.second));
			check[now.first * 2] = true;
			if (now.first * 2 == to)
				break;
		}

		if (now.first < 100000 && check[now.first + 1] != true)
		{
			q.push(make_pair(now.first + 1, now.second + 1));
			check[now.first + 1] = true;
			if (now.first + 1 == to)
				break;
		}
		if (now.first > 0 && check[now.first - 1] != true)
		{
			q.push(make_pair(now.first - 1, now.second + 1));
			check[now.first - 1] = true;
			if (now.first - 1 == to)
				break;
		}
	}

	cout << q.front().second << '\n';
}

int main()
{
	int a, b;

	cin >> a >> b;

	go(a, b);


}