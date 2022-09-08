#include <iostream>

using namespace std;

int main()
{
	int E[5], O[5];
	int i, j, k=0, l=0, n;

	for (i = 0; i < 15; ++i)
	{
		cin >> n;

		if (n % 2 == 0)
		{
			E[l]=n;
			l++;
			if (l == 5)
			{
				for (j = 0; j < 5; ++j)
				{
					cout << "par[" << j << "] = "<< E[j] << endl;
					E[j]=0;
				}
				l=0;
			}
		}else{
			O[k]=n;
			k++;
			if (k == 5)
			{
				for (j = 0; j < 5; ++j)
				{
					cout << "impar[" << j << "] = "<< E[j] << endl;
					O[j]=0;
				}
				k=0;
			}
		}
	}	
	return 0;
}
