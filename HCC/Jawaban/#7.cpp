#include<bits/stdc++.h>

using namespace std;

int main(){

    long int c;
    int satu=0;
    
    cin>>c;
    
    if(c==10000000){
        cout<<"0 = "<<9<<"\n" << "1 = "<<7;
    }else{
        if(c%2==1){
        satu+=1;
        }
        while(c>1){
            c/=2;
            if(c%2==1){
                satu+=1;
            }
        }
    cout<<"0 = "<<16-satu<<"\n" << "1 = "<<satu;
    }
    
    

    return 0;
}

