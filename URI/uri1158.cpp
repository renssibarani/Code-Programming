#include <iostream>

using namespace std;

int main()
{
	int i, N, X, Y, j, k;

	cin >> N;

	for (i = 0; i <N ; ++i)
	{
		j=0;
		cin >> X >> Y;
		if (X % 2 == 0) X++;
		
			for (k = 0; k < Y; ++k)
			{
			j+=X;
			X+=2;
			}
			cout << j << endl;
	}
	return 0;
}
