#include <iostream>

using namespace std;

int main()
{
	int a, sum=2;

	cin >> a;

	if (a == 1)
	{
		cout << "ya" << endl;
		return 0;
	}
	while(sum != a) {
	    if (sum > a)
	    {
	    	cout << "bukan" << endl;
	    	return 0;
	    }
	    sum *= 2;
	}
	cout << "ya" << endl;

	return 0;
}
