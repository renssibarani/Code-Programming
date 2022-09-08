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

    int n ;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i] == arr[i+1])
            continue;
        else {
            ans++;

        }
    }

    cout << ans << endl;



    return 0;
}

