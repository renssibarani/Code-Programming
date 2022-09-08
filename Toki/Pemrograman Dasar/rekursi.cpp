#include <iostream>

using namespace std;

void sum(int A){
    int s;
    cout << s+1;

    if (A == 0)
    {
        return 0;
    }
        return sum(A-1);
}

int main()
{
    int A;

    cin >> A;

    sum(A);
    return 0;
}
