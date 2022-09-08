#include<bits/stdc++.h>

using namespace std;

int main()
{

    int N, P, K, T, M[100], jmlAkhir;
    int jmlAwal = 100;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> P >> K;
        cin >> T;
        for (int i = 1; i <= T; i++)
        {
            cin >> M[i];
        }
        if(P == 0){
            jmlAkhir = 1;
        }
        for (int i = 0; i < P; i++)
        {
            jmlAwal -= 20;
            jmlAkhir = jmlAwal;
            if (jmlAwal <= 0)
            {
                jmlAwal = 100;
            }
        }
        for (int i = 1; i <= T - 1; i++)
        {
            for (int j = i + 1; j <= T; j++)
            {
                if (M[i] > M[j])
                {
                    int temp;
                    temp = M[j];
                    M[j] = M[i];
                    M[i] = temp;
                }
            }
        }
        for (int j = T; j > T - K; j--)
        {
            if (jmlAkhir <= 0)
            {
                cout << "Maaf Anda Telah Drop Out Dari DEL " << endl;
                break;
            }
            else
            {
                jmlAwal += M[j];
            }
        }
    }
    if (jmlAwal >= 777)
    {
        cout << "Selamat anda menjadi malaikat" << endl;
    }
    cout << "Jumlah Poin Akhir Anda : " << jmlAwal << endl;
    return 0;
}
