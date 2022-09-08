#include <iostream>
#include <cmath>

using namespace std;

long int x[1000], y[1000];

void teman(int N, int D);

int main(void)
{
	int N, D;
	cin >> N >> D;
	teman(N, D);
}

void teman(int N, int D){
	int min=2000000, max=-1, hasil;
	int i, j;

	for (i = 1; i <= N; ++i)
	{
		cin >> x[i] >> y[i];
	}

	for (i = 1; i <= N; ++i)
	{
		for (j = i + 1; j <= N; ++j)
		{
			hasil = pow(labs(x[i]-x[j]), D) + pow(labs(y[i]-y[j]), D);
			if (hasil > max)
			{
				max=hasil;
			}
			if (hasil<min)
			{
				min=hasil;
			}
		}
	}
	cout << min << " " << max << endl;
}
