#include <bits/stdc++.h>

using namespace std;

int main(){
    float a[100];
    int angka;
    cin >> angka;
    for (int i = 1; i <= angka; i++){
        cin >> a[i];
    }
    float c = 0;
    for(int i = 1; i <= angka; i++){
        c = c + a[i];
        a[i] = (c)/float(i); 
        cout << fixed << setprecision(1) << float(a[i]) << endl;
    }
    return 0;

}