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

    int n ,k;
    cin >> n >> k;
    ll total = 0;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    ll bagi = k / total;
    for(int i=0; i<n; i++){
        cout << bagi * arr[i] << endl;
    }



    return 0;
}

