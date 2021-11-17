#include <stdio.h>
int main()
{
	int check(int x, int y, int n);
	int x = 5;
	int y = 10;
	int n = 7;
	printf("%d", check(x, y, n));
	return 0;
}
int check(int x, int y, int n)
{
	if (x+y>0 && x+y<n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
