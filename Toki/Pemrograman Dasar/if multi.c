#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int i;
	scanf("%s", &a);

	for (i = 0; i < strlen(a); ++i)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}else{
			a[i] -= 32;
		}
	}
	printf("%s\n", a);
	return 0;
}
