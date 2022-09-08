#include <iostream>

using namespace std;

int main()
{
	int N, i;
	
	cin >> N;

	for (i = 1; i <= N; ++i)
	{
		if (i % 10 == 0)
		{
			continue;
		}else if (i == 42){
		cout << "ERROR" << endl;
			break;
		}
		cout << i << endl;
	}
	return 0;
}
