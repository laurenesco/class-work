#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SMALL_ARRAY 10000
#define MEDIUM_ARRAY 100000
#define LARGE_ARRAY 500000

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for(i=0; i<n-1; i++)
	{
		swapped = false;
		for(j=0; j<n-i-1; j++)	
		{
			if (arr[j]>arr[j+1])	
			{
			swap(&arr[j], &arr[j+1]);
			swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

void selection_sort(int arr[], int n)
{
	int i, j, min_idx;
	
	for(i=0; i<n-1; i++)
	{
		min_idx = i;
		for(j=i+1; j<n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		
		swap(&arr[min_idx], &arr[i]);
	}
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low-1);
	
	for(int j = low; j<=high-1; j++)
	{
		if (arr[j]<pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quick_sort(int arr[], int low, int high)
{
	if (low<high)
	{
		int pi = partition(arr, low, high);
		
		quick_sort(arr, low, pi-1);
		quick_sort(arr, pi+1, high);
	}
}


int main()
{
	//declare arrays
	int s[SMALL_ARRAY];
	int m[MEDIUM_ARRAY];
	int l[LARGE_ARRAY];
	
	//initialize srand
	srand((unsigned) time(NULL));
	
	//initialize arrays to random numbers
	for(int i=0; i<SMALL_ARRAY; i++)	{
		s[i] = rand()/1000;
	}
	for(int i=0; i<MEDIUM_ARRAY; i++)	{
		m[i] = rand()/1000;
	}
	for(int i=0; i<LARGE_ARRAY; i++)	{
		l[i] = rand()/1000;
	}
	
	//bubblesort small
	clock_t a;
	a = clock();
	bubble_sort(s, SMALL_ARRAY);
	a = clock() - a;
	double time_taken1 = ((double)a)/CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %f seconds to execute.\n", SMALL_ARRAY, time_taken1);

	//bubblesort medium
	clock_t b;
	b = clock();
	bubble_sort(m, MEDIUM_ARRAY);
	b = clock() - b;
	double time_taken2 = ((double)b)/CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %f seconds to execute.\n", MEDIUM_ARRAY, time_taken2);
	
	//bubblesort large 
	clock_t c;
	c = clock();
	bubble_sort(l, LARGE_ARRAY);
	c = clock() - c;
	double time_taken3 = ((double)c)/CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %f seconds to execute.\n", LARGE_ARRAY, time_taken3);
	
	//selectionsort small
	clock_t d;
	d = clock();
	selection_sort(s, SMALL_ARRAY);
	d = clock() - d;
	double time_taken4 = ((double)d)/CLOCKS_PER_SEC;
	printf("Selection sort on %d elements took %f seconds to execute.\n", SMALL_ARRAY, time_taken4);
	
	//selectionsort medium
	clock_t e;
	e = clock();
	selection_sort(m, MEDIUM_ARRAY);
	e = clock() - e;
	double time_taken5 = ((double)e)/CLOCKS_PER_SEC;
	printf("Selection sort on %d elements took %f seconds to execute.\n", MEDIUM_ARRAY, time_taken5);
	
	//selectionsort large
	clock_t f;
	f = clock();
	selection_sort(l, LARGE_ARRAY);
	f = clock() - f;
	double time_taken6 = ((double)f)/CLOCKS_PER_SEC;
	printf("Selection sort on %d elements took %f seconds to execute.\n", LARGE_ARRAY, time_taken6);
	
	//quicksort small
	clock_t g;
	g = clock();
	quick_sort(s, 0, SMALL_ARRAY);
	g = clock() - g;
	double time_taken7 = ((double)g)/CLOCKS_PER_SEC;
	printf("Quick sort on %d elements took %f seconds to execute.\n", SMALL_ARRAY, time_taken7);
	
	//quicksort medium
	clock_t h;
	h = clock();
	quick_sort(m, 0, MEDIUM_ARRAY);
	h = clock() - h;
	double time_taken8 = ((double)h)/CLOCKS_PER_SEC;
	printf("Quick sort on %d elements took %f seconds to execute.\n", MEDIUM_ARRAY, time_taken8);
	
	//quicksort large
	clock_t i;
	i = clock();
	quick_sort(l, 0, LARGE_ARRAY);
	i = clock() - i;
	double time_taken9 = ((double)i)/CLOCKS_PER_SEC;
	printf("Quick sort on %d elements took %f seconds to execute.\n", LARGE_ARRAY, time_taken9);
	
}


