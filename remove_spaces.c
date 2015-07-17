#include <stdio.h>
#include <string.h>

void removeSpaces(char *str)
{
	int count = 0;
	int len = strlen(str);
	
	for(int i = 0; i < len; i++)
	{
		if(str[i] != ' ')
		{
			str[count++] = str[i];
		}
	}

	str[count] = '\0';
}

int main()
{
	char str[] = "Archana is a good girl";

	removeSpaces(str);

	for(int i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}
