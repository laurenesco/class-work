#include <stdio.h>
#include <stdbool.h>

double median(double x, double y, double z);

int main()
{
	double a, b, c;
	a = 1;
	b = 2;
	c = 3;
	
	printf("%f", median(a, b, c));
	return 0;
}

double median(double x, double y, double z)
{
	double value;
	if(x<=y)
	{
		if(y<=z)
		{
			value = y;
		}
		else
		{
			value = z;
		}
	}
	else if(z<=y)
	{
		value = y;
	}
	else if(x<=z)
	{
		value = x;
	}
	return value;
}
