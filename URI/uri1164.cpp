#include <iostream>

using namespace std;

int main()
{
	int n, i, j, k;
	long int x;

	cin >> n;

	for (i = 0; i < n; ++i)
	 {
	 	cin >> x;
		k=0;
	 	for (j = 1; j < x; ++j)
	 	{
	 		if (x % j == 0)
	 		{
	 			k+=j;
	 		}else{
	 			k+=0;
			 }
	 	}
	 	if (k == x)
	 	{
	 		cout << x << " eh perfeito" << endl;
	 	}else{
	 		cout << x << " nao eh perfeito" << endl;
	 	}
	 } 
	return 0;
}
