#include <iostream>

using namespace std;

int main()
{
	int N, min, j, i  ;
	int X[1000];
	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> X[i];
		
	if(i == 0){
        min = X[i];
    }
    
    if(min > X[i]){
            min = X[i];
            i=j;
	}
	
	}
	cout << "Menor valor: " << min <<endl;
	cout << "Posicao: " << j << endl;
	return 0;
}
