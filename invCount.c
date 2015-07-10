#include <stdio.h>

int InvCount(int arr[], int n)
{
	int count = 0;

	for(int i = 0; i < (n-1); i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	/* code */
	int arr[] = {2, 4, 1, 3, 5};

	printf("Count inversions in the array is %d", InvCount(arr, 5));

	return 0;

	return 0;
}
