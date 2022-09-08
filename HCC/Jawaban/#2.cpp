//Putra Harianja
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define DFOR(i,a,b) for (int i = a; i > b; i--)
#define pb push_back
int main(void){
    int n;cin >> n;
    long int arr[n];
    long int hg[n];
    int max = 0;
    FOR(i, 0, n){
        cin >> arr[i]; cin >> hg[i]; 
        if(arr[i] > max){
            max = arr[i];
        }
    }
    vector<int> v(max+1, 0);
    FOR(i, 0, n){
        v[arr[i]] = hg[i];
    }
    v[0]= -1;
    v[max + 1] = 0;
    int jlh = 1;
    bool cek = true;
    for(int i = v.size() -1; i >= 0; i--){    
        cek = true;
        if(v[i] != 0 && v[i] != -1){
            DFOR(j, i-1, i - v[i]){
                if(v[j] != 0 ){
                    cek = false;
                    break;
                }
            }
            if(cek == true){
                jlh++;
                DFOR(j, i - 1, i- v[i]){
                    v[j] = -1;
                }
                v[i] = 0;
                continue;
            }
            FOR(j, i+1, i + v[i]){
                if(v[j] != 0 ){
                    cek = false;
                    break;
                }
            }
            if(cek == true){
                jlh++;
                FOR(j, i + 1, i+ v[i]){
                    v[j] = -1;
                }
                v[i] = 0;
            }
        }
    }
    cout << jlh << endl;
    return 0;
}

