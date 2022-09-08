#include <iostream>
#include <math.h>

using namespace std;

int A, B, X, K;

int func(int K){
    if (K == 1)
    {
       return abs((A*X) + B);
    }else{
        return abs((A*func(K-1)) + B);
    }
    
}
int main()
{
    cin >> A >> B >> K >> X;

    cout << func(K) << endl;

    return 0;
}



