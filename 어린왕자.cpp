#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n;
	cin >> n;
	int x1, y1, x2, y2;
	int planet;
	
	while (n--) {
		cin >> x1 >> y1 >> x2 >> y2;
		sum = 0;
		cin >> planet;
		for (int i=0; i<planet; i++ )
		{
			int x, y,r;
			cin >> x >> y>> r;
			if ((x - x1)*(x - x1) + (y - y1)*(y - y1) < r*r)
				sum+=1;
			if ((x - x2)*(x - x2) + (y - y2)*(y - y2) < r*r)
				sum +=1;
			if (((x - x1)*(x - x1) + (y - y1)*(y - y1) < r*r) && ((x - x2)*(x - x2) + (y - y2)*(y - y2) < r*r))
				sum -= 2;
		}

		cout << sum << '\n';
	}

}