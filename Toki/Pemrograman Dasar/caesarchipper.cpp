#include<cstdio>
#include<cstring>

char buff[11];
    int N;

int	main()
{
    scanf("%s", buff);
    scanf("%d", &N);

    int len = strlen(buff);
    for (int i = 0; i < len; i++)
    {
        int ord = (buff[i] - 'a');
        int encrypted = (ord + N) % 26;
        buff[i] = encrypted + 'a';
    }

    printf("%s\n", buff);
    return 0;
}
