 #include <stdio.h>

int main()
{
	long long int N;
	int M;
	scanf("%lld", &N);
		while(N > 1) {
		    N = N / 2;

		    if (N <= 1)
		    {
		    	break;
		    }else{
		    	M++;
		    }
		}
		if (M % 2 == 0)
		    {
		    	printf("ya\n");
		    }else{
		    	printf("bukan\n");
		    }
	return 0;
}
