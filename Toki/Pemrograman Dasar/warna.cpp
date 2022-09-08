#include<bits/stdc++.h>

using namespace std;


int main()
{
	string warna;

	cin >> warna;

	if (warna == "Merah")
	{
		cout << "Kuning" << endl;
	}else if (warna == "Hijau")
	{
		cout << "Ungu" << endl;
	}else if (warna == "Biru")
	{
		cout << "Cokelat" << endl;
	}else{
		cout << "Putih" << endl;
	}
	return 0;
}
