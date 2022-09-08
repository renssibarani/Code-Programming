#include <iostream>
using namespace std;

void biner(int N){
    if (N==1)
    {
        cout << "1";
    }else if (N % 2 == 1)
    {
        biner(N/2);
        cout << "1";
    }else
    {
        biner(N/2);
    	cout << "0";
    }
}

int main()
{
    int N;

    cin >> N;

    biner(N);
    cout << endl;
    return 0;
}
