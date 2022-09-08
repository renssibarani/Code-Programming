#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int N, D, K, i, j;
	cin >> N;
	for(i = 0 ; i < N; ++i){
		cin >> D;
		if(D == 1){
			cout << "BUKAN" << endl;
		}else{
			K = 0;
			for(j = 2; j < trunc(sqrt(D)); ++j){
				if(D % j == 0){
					K++;
					break;
				}
			}
			if(K == 0){
				cout << "YA" << endl;
			}else{
				cout << "BUKAN" << endl;
			}
		}
	}
	return 0;
}
