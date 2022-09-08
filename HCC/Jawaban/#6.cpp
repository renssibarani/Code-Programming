#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;

typedef long long ll;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,m,d;
    cin >> m >> d;
    cin >> a >> b;
    vector<ll>arr;
    for(ll i=a; i<=b; i++)
        arr.push_back(i);
    ll total = 0;
    if(d == 0){
        for(ll i=0; i<arr.size(); i++){
            if(arr[i] % m == 0){
                string s = to_string(arr[i]);
                if(s.size() == 1)
                    total++;
            }
        }
    } else {
        for(ll i=0; i<arr.size(); i++){
            if(arr[i] % m == 0){
                string s = to_string(arr[i]);
                if(s.size() == 1)
                {
                    if(s[0] - '0' == d)
                        {
                            total++;
                        }
                } else {

                        bool cek = true;
                        for(ll i=0; i<s.size(); i++){
                            if(i % 2 == 1){
                                if(s[i] - '0' != d){
                                    cek = false;
                                }
                            } else {
                                if(s[i] - '0' == d){
                                    cek = false;
                                    break;
                                }
                            }
                        }
                        if(cek)
                            {
                                total++;
                            }
                }

            }
        }
    }
    cout << total % MOD << endl;




    return 0;
}

