#include <iostream>
#include <string>

using namespace std;

int	main()
{
    string S, T;

    cin >> S >> T;

    int lem = T.size();

    while(S.find(T) != string::npos){
	    S.erase(S.find(T) , (lem));
	}
    cout << S << endl;

    return 0;
}
