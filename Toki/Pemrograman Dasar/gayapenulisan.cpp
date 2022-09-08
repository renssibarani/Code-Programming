#include <iostream>
#include <string>

using namespace std;

int	main()
{
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_')
        {
            s[i+1] -= 'a' - 'A';
        }else if (s[i+1] >= 'A' && s[i+1] <= 'Z')
		{
            s[i+1] -= 'A' - 'a';
            cout <<s[i]<<"_";
        }else{
        	cout << s[i];
		}

    }
    cout << endl;

    return 0;
}
