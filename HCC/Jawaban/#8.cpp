#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define DFOR(i,a,b) for (int i = a; i > b; i--)
#define pb push_back
int main(void){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int a, b;
    a = abs(s1[0] - s2[0]);
    b = abs(s1[1] - s2[1]);
    
    if(a > b)cout << a <<"\n";
    else cout << b << "\n";
    
    while( s1 != s2){
        if(s2[0] > s1[0] && s2[1] > s1[1]){
            s1[0]++; s1[1]++;
            cout << "RU\n";
        }else if(s2[0] == s1[0] && s2[1] > s1[1]){
            s1[1]++;
            cout << "U\n";
        }else if(s2[0] < s1[0] && s2[1] > s1[1]){
            s1[0]--; s1[1]++;
            cout << "LU\n";
        }else if(s2[0] < s1[0] && s2[1] == s1[1]){
            s1[0]--;
            cout << "L\n";
        }else if(s2[0] < s1[0] && s2[1] < s1[1]){
            s1[0]--; s1[1]--;
            cout << "LD\n";
        }else if(s2[0] == s1[0] && s2[1] < s1[1]){
            s1[1]--;
            cout << "D\n";
        }else if(s2[0] > s1[0] && s2[1] < s1[1]){
            s1[0]++; s1[1]--;
            cout << "RD\n";
        }else if(s2[0] > s1[0] && s2[1] == s1[1]){
            s1[0]++;
            cout << "R\n";
        }
    }
    return 0;
}

