#include <stdio.h>


int main()
{
	int A, B, i, N, C;


	scanf("%d", &N);

	for (i = 0; i < N; ++i)
	{
		scanf("%d", &C);

		if(i==0){
	            B=C;
	            A=C;
	    }
	    if(B>C){
	            B=C;
	    }
	    if(A<C){
	            A=C;
	    }
	}

	printf("%d %d\n", A, B);
	return 0;
}
