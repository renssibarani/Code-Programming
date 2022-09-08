#include <iostream>

using namespace std;
void draw(int n){
    if (n>0)
    {
        draw(n-1);
        for (int i = 1; i <= n; i++)
        {
        	if(i == n){
                cout << "*" << endl;
    		}else{
    			cout << "*";
			}
		}
        draw(n-1);
    }
    return;
}

int main()
{
    int n;

    cin >> n;

    draw(n);

    return 0;
}

