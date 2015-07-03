#include <stdio.h>

char str[100];

char *rev(char str1[])
{
	static int i = 0;

	if(*str1)
	{
		rev(str1+1);
		str[i] = *str1;
		i++;
	}

	return str;
}

int main()
{
	char str1[] = "Parents are awesome";
	printf("%s", rev(str1));

	return 0;
}