#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int i;
	float A[100];

	for (i = 0; i < 100; ++i)
	{
		cin >> A[i];

		if (A[i] > 10)
		{

		}else {
		cout<<setiosflags(ios::fixed);
		cout << "A[" << i << "] = " << setprecision(1) << A[i] << endl;
		}
	}
	return 0;
}
