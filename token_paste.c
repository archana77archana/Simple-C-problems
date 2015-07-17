#include <stdio.h>
#define merge(a, b) a##b

int main()
{
	printf("%d", merge(36, 15));

	return 0;
}
