#include <iostream>

using namespace std;

int main()
{
	int N, i, j, k=-1;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j <i+1; ++j)
		{
			k++;
			if (k > 9)
			{
				k = 0;
			}
			cout << k ;
		}
		cout << endl;
	}
	return 0;
}
