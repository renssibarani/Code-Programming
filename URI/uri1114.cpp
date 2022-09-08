#include <iostream>
#include<cstring>

using namespace std;

char buff[50];
    int N, A;

int	main()
{
    cin >> A;
    for (int j = 0; j < A; j++)
    {
    cin >> buff;
    cin >> N;

    int len = strlen(buff);
    for (int i = 0; i < len; i++)
    {
        int ord = (buff[i] - 'A');
        int encrypted = (ord - N) % 26;
        buff[i] = encrypted + 'A';
    }
	cout << buff << endl;
    }
    
    return 0;
}
