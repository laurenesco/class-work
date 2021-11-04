#include <stdio.h>
#define MAX 20

int main()
{
    //prototypes
    int largest_num(int a[]);
    float average(int a[]);
    int count(int a[]);

    //declaring array a with size 20 = 0
    int a[MAX] ={0};

    //setting entire array equal to 5
    for (int i=0; i<MAX; i++)
    {
        a[i] = 5;
    }

    //testing functions
    printf("%d\n", largest_num(a));
    printf("%.2f\n", average(a));
    printf("%d\n", count(a));

    return 0;
}

int largest_num(int array[])
{
    int value=0;
    for(int i=0; i<MAX; i++)
    {
        if(array[i]>value)
        {
        value = array[i];
        }
    }
    return value;
}

float average(int a[])
{
    float value = 0;
    int size = 0;
    for(int i=0; i<MAX; i++)
    {
        value += a[i];
        size++;
    }
    return value/size;
}

int count(int a[])
{
    int value = 0;
    for(int i=0; i<MAX; i++)
    {
        if(a[i]>0)
        {   
        value++;
        }
    }
    return value;
}
