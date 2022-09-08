//Putra Harianja
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define DFOR(i,a,b) for (int i = a; i > b; i--)
#define pb push_back
int main(void){
	int a, b;
	cin >> a >> b;
	int cek = false;
	while(a < b){
	 	a += 2;
	 	b -= 3;
	 	if(a == b)cek = true;
	}
	if(cek == true){
		cout << "STOP!!\n" << a << "\n"; 
	}else{
		cout << "Lanjut terus!! Jangan kasih kendor!!" << endl;
	}

	return 0;
}

