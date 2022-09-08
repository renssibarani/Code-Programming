#include <iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	int i;

	cin >> a;

	for (i = 0; i < strlen(a); ++i)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}else{
			a[i] -= 32;
		}
	}
	printf("%s\n", a);
	return 0;
}
