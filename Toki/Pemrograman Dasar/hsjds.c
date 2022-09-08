#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int i;
	scanf("%s", &a);

		if (a[0] % 2 == 0 && a[0] % 3 ==0)
		{
			a[0] = 90;
			printf("%s\n", a);
		}else{
			printf("%s\n", a);
		}
	return 0;
}
