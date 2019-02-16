#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int yon = 0;
		int kor = 0;
		for (int i = 0; i < 9; i++)
		{
			int y, k;
			cin >> y >> k;

			if (y > k)
				yon += 1;
			if (y < k)
				kor += 1;

		}

		if (yon > kor)
			cout << "Yonsei" << '\n';
		else if (yon < kor)
			cout << "Korea" << '\n';
		else
			cout << "Draw" << '\n';
	}
}