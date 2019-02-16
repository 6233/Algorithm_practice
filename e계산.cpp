#include <iostream>
#include <cstdio>
using namespace std;


int fact(int i)
{
	if (i <= 1 )
		return 1;
	return fact(i-1)*i;
}
int main()
{
	double e=0;
	for (int i = 0; i <= 9; i++)
	{
		e += (double)1/fact(i);
		printf("%d %0.9f\n", i, e);
		
	}

	return 0;
}