#include <iostream>

using namespace std;

int main()
{
	int N[100];
	int i, k=0;

	for (i = 0; i != EOF; ++i)
	{
		cin >> N[i];
		k=i;
	}

	for (i = k; i > 0; --i)
	{
		cout << N[i] << endl;
	}
	return 0;
}
