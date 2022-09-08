#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, j, n, m, k, l=0, p;
	int a[100]; 
	
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		p=0;
		cin >> m; 
		for (j = 0; j < m; ++j)
		{
			cin >> a[j];
		}
		for (j = 0; j < m; ++j)
		{
			for (k = 0; k < m; ++k)
			{
				if (a[j] != a[k])
				{
					continue;
				}else{
					l++;
					if (l == 2)
					{
						p++;
					}else if (l == 3)
					{
						p+=2;
					}else{
						p=p;
					}
				}
			}
			p+=p;
		}
		cout << "Case #" << i << ": " << p << endl;
	}

	return 0;
}
