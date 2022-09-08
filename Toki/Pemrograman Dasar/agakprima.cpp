#include <iostream>

using namespace std;

int main()
{
	int N, i, k, j, l;

	cin >> N;

	for (i = 1; i <= N; ++i)
	{
		l=0;
		cin >> k;
		for (j = 1; j <= k; ++j)
		{
			if (k % j == 0)
			{
				l++;
				if (l > 4)
				{
					j = k+1;
				}
			}
		}
		
			if (l > 0 && l < 5)
			{
				cout << "YA" << endl;
			}else{
				cout << "BUKAN" << endl;
			}
	}
	
	return 0;
}
