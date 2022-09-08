#include <iostream>

using namespace std;

int main()
{
	int T, N[1000], i, j;

	cin >> T;
	j=T;
	for (i = 0; i < 1000; ++i)
	{
		if (j == T+T)
		{
			j = T;
		}
		cout << "N[" << i << "] = " <<  j-T << endl;
		j++;
	}
	return 0;
}
