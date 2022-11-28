#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int lpk=0, dpk=0, spk=0, lk=0, dk=0, sk=0, uk, n;
    float m, lpc=0, dlc=0, spc=0, sisa;

    cin>>m;

    if(1 == (m*10)){
        spc = 1;
        cout <<"UANG KERTAS:"<<endl;
        cout << "50.00 " << lpk << endl;
        cout << "20.00 " << dpk << endl;
        cout << "10.00 " << spk << endl;
        cout << "5.00 " << lk << endl;
        cout << "2.00 " << dk << endl;
        cout << "1.00 " << sk << endl;
        cout << "UANG KOIN:"<< endl;
        cout << "0.50 " << lpc << endl;
        cout << "0.25 " << dlc << endl;
        cout << "0.10 " << spc;
    
    }else{
        n = m;
        cout <<"UANG KERTAS:"<<endl;
    
        if(n>=50.0){
        lpk = n/50;
        sisa = n-(lpk*50.0);
        cout << "50.00 " << lpk << endl;
        }else{
                sisa=n;
            }
        if(sisa >= 20.0){
            dpk = sisa/20.0;
            sisa = sisa-(dpk*20.0); 
        }
            cout << "20.00 " << dpk << endl;
        if(sisa >= 10.0){
            spk = sisa/10.0;
            sisa = sisa-(spk*10.0); 
        }
            cout << "10.00 " << spk << endl;
        if(sisa >= 5.0){
            lk = sisa/5.0;
            sisa = sisa-(lk*5.0); 
        }
            cout << "5.00 " << lk << endl;
        if(sisa >= 2.0){
            dk = sisa/2.0;
            sisa = sisa-(dk*2.0); 
        }
            cout << "2.00 " << dk << endl;
        if(sisa >= 1.0){
            sk = sisa/1.0;
            sisa = sisa-(sk*1.0); 
        }
            cout << "1.00 " << sk << endl;
            uk = round((m - (lpk*50 + dpk*20 + spk * 10 + lk * 5 + dk*2 + sk * 1))*100);
        cout << "UANG KOIN:"<< endl;
        if(uk >= 50){
            lpc = uk/50;
            uk = uk-(lpc*50); 
        }
            cout << "0.50 " << lpc << endl;
        if(uk >= 25){
            dlc = uk/25;
            uk = uk-(dlc*25); 
        }
            cout << "0.25 " << dlc << endl;
            
            if(uk >= 1){
                spc = uk/1;
                uk = uk-(spc*1); 
        }
        cout << "0.10 " << spc;
    }

}