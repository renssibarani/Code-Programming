#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, j, n, m, p=0;
	int k=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, r=0, s=0;
	int a[100]; 
	
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cin >> m; 
		for (j = 0; j < m; ++j)
		{
			cin >> a[j];

			if (a[j] == 1)
			{
				k++;
				if (k == 2)
				{
					k = 2;
				}else if
			}else if (a[j] == 2)
			{
				b++;
			}else if (a[j] == 3)
			{
				c++;
			}else if (a[j] == 4)
			{
				d++;
			}else if (a[j] == 5)
			{
				e++;
			}else if (a[j] == 6)
			{
				f++;
			}else if (a[j] == 7)
			{
				g++;
			}else if (a[j] == 8)
			{
				h++;
			}else if (a[j] == 9)
			{
				r++;
			}else if (a[j] == 10)
			{
				s++;
			}
			p = k+b+c+d+e+f+g+h+r+s;
		}
		cout << "Case #" << i << ": " << p<< endl;
	}

	return 0;
}
