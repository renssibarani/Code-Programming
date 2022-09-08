#include <iostream>

using namespace std;

int main()
{
	int N[20], i;

	for (i = 0; i < 20; ++i)
	{
		cin >> N[i];
	}

	for (i = 19; i >= 0; --i)
	{
		cout << "N[" << 19-i << "] = " << N[i] << endl;
	}
	return 0;
}
