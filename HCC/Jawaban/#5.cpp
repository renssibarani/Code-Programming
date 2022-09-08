//Putra Harianja
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define DFOR(i,a,b) for (int i = a; i > b; i--)
#define pb push_back
int main(void){
    string s = "NINA ISMAYA PANGARIBUAN";
    int len = s.size();
    int n;cin >> n;
    int index = n % len;
    cout << s[index - 1] << endl;
    
    return 0;
}

