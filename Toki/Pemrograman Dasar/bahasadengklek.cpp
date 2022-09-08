#include <iostream>
#include <string>

using namespace std;

int	main()
{
    string s;
    int i;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <='z')
        {
            s[i] -= 'a' - 'A';
        }else if (s[i] >= 'A' && s[i] <='Z')
        {
            s[i] -= 'A' - 'a';
        }
        
    }
    
    cout << s.c_str() << endl;

    return 0;
}
