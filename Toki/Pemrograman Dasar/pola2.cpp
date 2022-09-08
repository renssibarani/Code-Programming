#include <iostream>

using namespace std;

int main()
{
	int N, i, j;

	cin >> N;

	for (i = 1; i <= N; ++i)
	{
		for (j = N; j >= 1 ; --j)
		{
			if (j > i)
			{
				cout << " ";
			}else{
				cout<< "*";
			}
		}
			cout << endl;
	}
	return 0;
}
