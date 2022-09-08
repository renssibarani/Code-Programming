#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
	long long int N, M;
	
	long long int a;

	cin >> N;
	cin >> M;

	if (N % M != 0)
	{
		a = N / M +1;
	}else{
		a = N / M;
	}
	cout << a << endl;
	return 0;
}
