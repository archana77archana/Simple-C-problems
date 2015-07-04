#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int arr[], int n)
{
	int i, j, min;

	for(i = 0; i < n; i++)
	{
		min = i;

		for(j = i+1; j < n; j++)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}

		swap(&arr[min], &arr[j]);
	}
}

void wave(int arr[], int n)
{
	sort(arr, n);

	for(int i = 0; i < n; i += 2)
	{
		if((i > 0) && (arr[i-1] > arr[i]))
			swap(&arr[i], &arr[i-1]);

		if((i < (n-1)) && (arr[i] < arr[i+1]))
			swap(&arr[i], &arr[i+1]);
	}

}

void print(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");
}

int main()
{
	int arr[] = {10, 90, 49, 2, 1, 5, 23};
	int n = sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);
	print(arr,n);

	wave(arr, n);
	print(arr, n);

	return 0;

}
