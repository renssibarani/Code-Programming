#include <iostream>

using namespace std;

int main()
{
	int n, i, j, k;
	long int x;

	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> x;
		k=0;
		for (j = 1; j <= x; ++j)
		{
			if (x % j == 0)
			{
				k++;
			}
		}
		if (k == 2)
			{
				cout << x << " eh primo" << endl;
			}else{
				cout << x << " nao eh primo" << endl;
			}
	}
	return 0;
}
