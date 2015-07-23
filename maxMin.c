#include <stdio.h>

void maxMin(int arr[], int n)
{
  int diff = arr[1]-arr[0];
  
  for(int i = 0; i < n; i++)
  {
    for(int j = i+1; j < n; j++)
    {
      if((arr[j]-arr[i]) > diff)
      {
	diff = arr[j]-arr[i];
      }
    }
  }
  
  return diff;
}

int main()
{
  int arr[] = {1, 2, 90, 10, 110};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Max difference: %d", maxMin(arr, n));
  
  return 0;
}
