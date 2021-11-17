#include <stdio.h>
#include <stdbool.h>
double median(double x, double y, double z)
int main()
{
	int value;
	if(x<=y)
	{
		if(y<=z)
		{
			value = y;
		}
		else{
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
