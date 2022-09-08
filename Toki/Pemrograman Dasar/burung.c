#include <stdio.h>

int main()
{
	char a[100];

	scanf(" %[^\n\t]s", &a);

	printf("%s\n", a);
	return 0;
}