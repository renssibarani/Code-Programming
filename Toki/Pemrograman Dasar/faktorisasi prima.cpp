#include <iostream>

using namespace std;

int main()
{
	int n, faktor, expo;

	cin >> n;

	faktor= 2;

	while(faktor < n) {
	
	   if (n % faktor == 0)
	   {
	   expo = 0;
		   while(n % faktor == 0) {		
		   	n = n/faktor;
		   	expo++;
		}

	   if (expo != 1)
	   {
	   	cout << faktor << "^" << expo ;
	   }else{
	   	cout << faktor;
	   }
	   if (n != 1)
	   {
	   	cout << " x ";
	   }
	}
	faktor++;
}
if (n != 1)
{
	cout << faktor ;
}
cout << endl;
	return 0;
}
