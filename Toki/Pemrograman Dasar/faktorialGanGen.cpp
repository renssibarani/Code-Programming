#include <iostream>

using namespace std;

int faktorial(int N);

int	main()
{
    int N, fak;

    cin >> N;

    fak = faktorial(N);
    cout << fak << endl;

    return 0;
}

int faktorial(int N){
    if (N == 1)
    {
        return 1;
    }else{
        if (N % 2 == 0)
        {
            return (N/2) * faktorial(N-1);
        }else{
            return N * faktorial(N-1);
        }
    }
}
