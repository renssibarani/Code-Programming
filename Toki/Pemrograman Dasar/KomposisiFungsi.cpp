#include <iostream>

using namespace std;

void fungsi(int X, int K, int A, int B);

int main()
{
	int A, B, X, K;

	cin >> A >> B >> K >> X;

		fungsi(X, K, A, B);
		cout << endl;

	return 0;
}

void fungsi(int X, int K, int A, int B){
	int f, i, l = 0;
	f = (A*X) + B;
	if (f >= 0)
	{
		f = f;
	}else{
		f = -1*f;
	}

	if (K > 1)
	{
		for (i = 2; i <= K; ++i)
		{
			l = (A*f) + B;
			if (i >= 2)
			{
				if (l >= 0)
				{
					f = l;
				}else{
					f = -l;
				}
			}else{
				f = f;
			}
		}

		if (l < 0)
		{
			cout << -1*l;
		}else{
			cout << l;
		}
	}
	else if (K == 1)
	{
		cout << f;
	}
}
