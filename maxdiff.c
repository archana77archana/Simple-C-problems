#include <stdio.h>

int maxdiff(int arr[], int n)
{
  int maxdiff = arr[1]-arr[0];
  int min = arr[0];
  int i;
  for(i = 1; i < n; i++)
  {
    if(arr[i]-min > maxdiff)
    {
      maxdiff = arr[i]-min;
    }
    
    if(arr[i] < min)
    {
      min = arr[i];
    }
  }
  
  return maxdiff;
}

int main()
{
  int arr[] = {1, 2, 6, 80, 100};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  printf("Max difference: %d", maxdiff(arr, n));
  
  return 0;
}
