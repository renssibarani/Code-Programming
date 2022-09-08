#include <iostream>

using namespace std;

int main()
{
	int x, i, k;

	while(1) {
		cin >> x;
		k=0;
		if (x == 0)
	    {
	    	return 0;
	    }else{
	    	if (x % 2 == 0)
	    	{
	    		for (i = 0; i < 5; ++i)
	    		{
	    			k+=x;
	    			x+=2;
	    		}
	    		cout << k << endl;
	    	}else{
	    		x+=1;
	    		for (i = 0; i < 5; ++i)
	    		{
	    			k+=x;
	    			x+=2;
	    		}
	    		cout << k << endl;
	    	}
	    }
	}	
	return 0;
}
