#include <iostream>

using namespace std;

int main()
{
	int x[10], v, i;

	cin >> v;

	for (i = 0; i < 10; ++i)
	{
		cout << "N[" << i << "] = " << v << endl;
	v*=2;	
	}
	return 0;
}
