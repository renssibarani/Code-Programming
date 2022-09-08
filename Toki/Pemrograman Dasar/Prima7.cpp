#include <iostream>

using namespace std;

int main(){
	int a, N, i;
	int b;
	bool prima;
	
	cin >> N;
	for (i = 0; i < N; ++i)
	{
	prima = true;
	b=2;
	cin >> a;
	
		if(a < 2){
			prima = false;
		}
			while(b < a){
				if(a % b ==0){
					prima = false;
				}
				b++;
			}
		if(prima){
			cout << "YA" <<endl;
		}
		else{
			cout << "BUKAN" << endl;
		}
	}
	return 0;
}
