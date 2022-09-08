#include<bits/stdc++.h>

using namespace std;


int main()
{
	string hari;

	cin >> hari;

	if (hari == "senin")
	{
		cout << "selasa" << endl;
	}else if (hari == "selasa")
	{
		cout << "rabu" << endl;
	}else if (hari == "rabu")
	{
		cout << "kamis" << endl;
	}else if (hari == "kamis")
	{
		cout << "jumat" << endl;
	}else if (hari == "jumat")
	{
		cout << "sabtu" << endl;
	}else if (hari == "sabtu")
	{
		cout << "minggu" << endl;
	}else if (hari == "minggu")
	{
		cout << "senin" << endl;
	}

	return 0;
}
