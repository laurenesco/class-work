#include <stdio.h>
#include <stdbool.h>

#define X 10

/*		**SAVE TO ARRAY AND PRINT BACKWARD**
int main()
{
	int a[X];
	
	printf("Please enter %d integers: \t", X);
	printf("\n");
	
	for (int i=0; i<X, i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i=X-1; i>=0; i--)
	{
		printf("%d ", a[i]);
	}
												*/
/*		**CHECK FOR REPEATED DIGITS**
int main()
{
	bool digit_seen[X] = false;
	int digit;
	long n;
	
	printf("Please enter an integer: \n");
	scanf("%ld", &n);
	
	while(n>0)
	{
		digit = n%10;
		if(digit_seen[digit])
		{
			break;
		}
		digit_seen[digit] = true;
		n/=10;
	}
	
	if(n>0)
	{
		printf("Repeated digits.");
	}
	else
	{
		printf("No repeated digits.");
	}
												*/

/*			**CLEAR ARRAY USING ARRAY LENGTH FORMULA**
int main()
{
	int a[X] = {5, 6 , 816 5, 68, 6};
	
	for (int i=0; i<(sizeof(a)/sizeof(a[0])); i++)
	{
		a[i] = 0;
	}
												*/
												
/*			**INITIALIZE ONLY CERTAIN ELEMENTS**
int main()
{
	int a[X] = {[4] = 5, [9] = 17};
	//OR
	int b[X] = {1, 2, [6] = 17, 9};
	
	for(int i=X-1; i>=0; i--)
	{
		printf("%d ", a[i]);
	}
	for(int i=X-1; i>=0; i--)
	{
		printf("%d ", b[i]);
	}
													*/
