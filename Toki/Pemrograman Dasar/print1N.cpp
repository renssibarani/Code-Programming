#include <iostream>

using namespace std;

    int A=0;
    
void cetak(int N){

    cout << A+1 << endl;
    A++;
    if (A == N)
    {
        return;
    }
    cetak(N);
}

int main()
{
    int N;

    cin >> N;

    cetak(N);
    return 0;
}
