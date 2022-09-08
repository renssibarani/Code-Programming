#include <iostream>

using namespace std;

void gangin(int N){
    
    if (N % 2 == 0)
    {
        cout << N << " = " << "Genap" << endl;
        if (N == 1)
    {
        return;
    }
        gangin(N-1);
    }else{
        cout << N << " = " << "Ganjil" << endl;
        if (N == 1)
    {
        return;
    }
        gangin(N-1);
    }
    
}

int main()
{
    int N;

    cin >> N;

    gangin(N);
    return 0;
}
