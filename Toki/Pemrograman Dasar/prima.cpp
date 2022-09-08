#include <iostream>

using namespace std;

int main()
{
	int i, N, M;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> M;
		if (N % 3 == 0 && N % 2 == 0)
		{
			cout << "BUKAN" << endl;
		}else{
			cout << "YA" << endl;
		}
	}
	return 0;
}
