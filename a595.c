#include <stdio.h>
int main()
{
	int num_digits(int input);
	int n = 7613548;
	printf("%d", num_digits(n));
	return 0;
}
int num_digits(int input)
{
	int length=0;
	while(input>0)
	{
		if(input%10>0)
		{
			length++;
		}	
		input/=10;
	}
	return length;
}
