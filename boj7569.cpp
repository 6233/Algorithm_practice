#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

class tomato
{
	int x, y, z, count;
public:
	tomato()
	{
		x = 0;
		y = 0;
		z = 0;
		count = 0;
	}
	tomato(int a, int b, int c, int cnt)
	{
		x = a;
		y = b;
		z = c;
		count = cnt;
	}
	int get_x()
	{
		return x;
	}

	int get_y()
	{
		return y;
	}

	int get_z()
	{
		return z;
	}
	int get_count()
	{
		return count;
	}
};

queue<tomato> q;
int a[102][102][102];

int main()
{
	int result = 0;

	
	memset(a, 2, sizeof(a));
	int n, m,h;
  bool allZeroCoint = true;

	cin >> m >> n >> h;
	
	for(int k=1; k<=h; k++)
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j][k];
      if (a[i][j][k] >0) {
        allZeroCoint = false;
      }
    }
  if (allZeroCoint) {
    cout << "-1" << '\n';
    return 0;
  }
	for (int k = 1; k <= h; k++)
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (a[i][j][k] == 1)
			{
				q.push(tomato(i,j,k,0));
			}
	if (q.empty())
	{
		cout << result << '\n';
		return 0;
	}
	while (!q.empty())
	{
			//left
			if (a[q.front().get_x() - 1][q.front().get_y()][q.front().get_z()] == 0)
			{
				q.push(tomato(q.front().get_x() - 1, q.front().get_y(),q.front().get_z() ,q.front().get_count()+1));
				a[q.front().get_x() - 1][q.front().get_y()][q.front().get_z()] = 1;
			}
			//right
			if (a[q.front().get_x() + 1][q.front().get_y()][q.front().get_z()] == 0)
			{
				q.push(tomato(q.front().get_x() + 1, q.front().get_y(), q.front().get_z(), q.front().get_count() + 1));
				a[q.front().get_x() + 1][q.front().get_y()][q.front().get_z()] = 1;
			}
			//up
			if (a[q.front().get_x()][q.front().get_y()+1][q.front().get_z()] == 0)
			{
				q.push(tomato(q.front().get_x(), q.front().get_y()+1, q.front().get_z(), q.front().get_count() + 1));
				a[q.front().get_x()][q.front().get_y()+1][q.front().get_z()] = 1;
			}
			//down
			if (a[q.front().get_x()][q.front().get_y()-1][q.front().get_z()] == 0)
			{
				q.push(tomato(q.front().get_x(), q.front().get_y()-1, q.front().get_z(), q.front().get_count() + 1));
				a[q.front().get_x()][q.front().get_y()-1][q.front().get_z()] = 1;
			}
			//top
			if (a[q.front().get_x()][q.front().get_y()][q.front().get_z()+1] == 0)
			{
				q.push(tomato(q.front().get_x(), q.front().get_y(), q.front().get_z()+1, q.front().get_count() + 1));
				a[q.front().get_x()][q.front().get_y()][q.front().get_z()+1] = 1;
			}
			//bottom
			if (a[q.front().get_x()][q.front().get_y()][q.front().get_z()-1] == 0)
			{
				q.push(tomato(q.front().get_x(), q.front().get_y(), q.front().get_z()-1, q.front().get_count() + 1));
				a[q.front().get_x()][q.front().get_y()][q.front().get_z()-1] = 1;
			}


			if (q.front().get_count() >= result)
				result = q.front().get_count();
			q.pop();
	}

	for(int k=1; k<=h; k++)
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			if (a[i][j][k] == 0) {
				cout << "-1" << '\n';
				return 0;
			}

	cout << result << '\n';

	return 0;
}

