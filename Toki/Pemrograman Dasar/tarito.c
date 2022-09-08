#include <stdio.h>

int main()
{
	char a[100];
	int i;
	scanf("%s", &a);
	for (i = 0; i <strlen(a) ; ++i)
	{
		if (i % 6 == 0)
		{
			a[i] = 'z';
		}
		printf("%s", a[i]);
	}
	return 0;
}
