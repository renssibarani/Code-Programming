#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin >> a;
     for(int i = 1; i <= a; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            if(j==1 || j==i){ //awal dan akhir
               cout << "*";
            }else if(j % 3 == 2){
                cout<< "d";
            }else if(j % 3 == 1){
                cout << "c";
            }else if(j%3 ==0){
                cout << "p";
            }
        }
         cout << endl;
    }
    return 0;
}
