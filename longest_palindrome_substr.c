#include <stdio.h>
#include <string.h>

void printSubstr(char *str, int low, int high)
{
	for(int i = low; i <= high; ++i)
	{
		printf("%c", str[i]);
	}
}

int long_pal_substr(char *str)
{
	int maxLen = 1;
	int start = 0;
	int len = strlen(str);
	int low, high;

	for(int i = 1; i < len; ++i)
	{
		//even length palindrome

		low = i-1;
		high = i;

		while((low >= 0) && (high < len) && (str[low] == str[high]))
		{
			if((high-low+1) > maxLen)
			{
				start = low;
				maxLen = high-low+1;
			}

			--low;
			++high;
		}

		//odd length palindrome
		low = i-1;
		high = i+1;

		while((low >= 0) && (high < len) && (str[low] == str[high]))
		{
			if((high-low+1) > maxLen)
			{
				start = low;
				maxLen = high-low+1;
			}

			--low;
			++high;
		}
	}

	printf("Longest palindrome substring is: ");
	printSubstr(str, start, start+maxLen-1);

	return maxLen;
}

int main()
{
	char str[] = "formalayalamfor";

	printf("\nLength is: %d\n", long_pal_substr(str));

	return 0;
}
