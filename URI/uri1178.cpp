#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double N[100], x;
	int i;

	cin >> x;

	for (i = 0; i < 100; ++i)
	{
		cout<<setiosflags(ios::fixed);
		cout << "N[" << i << "] = " << setprecision(4) <<  x << endl;
		x*=0.5;	
	}
	return 0;
}
