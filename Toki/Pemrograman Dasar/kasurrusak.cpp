#include <iostream>
#include <string>

using namespace std;

string s, A, substring;

bool palindrome(string s){
    A = s;
        if (A.length() == 0)
        {
            return true;
        }
    
    if (s[0] == s[s.length() - 1])
    {
        substring = A.erase(A.length()-1, 1);
        substring = substring.erase(0,1);
        return palindrome(substring);
    }else{
        return false;
    }
    
    
}
int	main()
{
    

    cin >> s;

    if (palindrome(s))
    {
        cout << "YA" << endl;
    }else{
        cout << "BUKAN" << endl;
    }

    return 0;
}

