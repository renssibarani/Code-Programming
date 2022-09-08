#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[100];
	
	cin >> a;

	for (int i = 0; i < strlen(a); ++i)
	{
		if (i % 6 == 0)
		{
			a[i] = 'z';
		}
		cout << a[i];
	}
	return 0;
}
