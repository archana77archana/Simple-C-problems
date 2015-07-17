#include <stdio.h>
#include <stdlib.h>

#define NO_OF_CHARS 256

int *getCharCountArray(char *str)
{
	int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
	for(int i = 0; i < *(str+i); i++)
	{
		count[*(str+i)]++;
	}

	return count;
}

int firstNonRepeating(char *str)
{
	int *count = getCharCountArray(str);
	int index = -1;

	for(int i = 0; i < *(str+i); i++)
	{
		if(count[*(str+i)] == 1)
		{
			index = i;
			break;
		}
	}

	free(count);
	return index;
}

int main()
{
	char str[] = "geeksforgeeks";
	char index = firstNonRepeating(str);

	if(index == -1)
		printf("Either all the characters are repeating or the string is empty\n");
	else
		printf("First non repeating character: %c", str[index]);

	return 0;
}
