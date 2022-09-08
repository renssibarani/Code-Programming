#include <stdio.h>

int main()
{
	int X, Y, K, i, a=0, b=0;
	char S[1000];

	scanf("%d %d", &X, &Y);
	scanf("%s", &S);
	scanf("%d", &K);

	for (i = 0; i <strlen(S) - 1 ; ++i)
	{
		if (S[i] == 'v' || S[i] == 'V')
		{
			a += 1;
		}else if (S[i] == '^')
		{
			a += 1;
		}else if (S[i] == '<')
		{
			b += 1;
		}else if (S[i] == '>')
		{
			b += 1;
		}
	}
	printf("%d,%d", b+X, a+Y);
	return 0;
}
