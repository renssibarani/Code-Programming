#include <stdio.h>

int main()
{
	long long M, N;
	int i=0;
	for(i = 0;i=eof(i);i++) {
	scanf("%d, %d", &M, &N);

	printf("%d\n", (fac(M)+fac(N)));
	}
	return 0;
}

int fac (int x){
	int f;
	if(x==0){
	return(1);
	}else{
		f = x*fac(x-1);
	}	
	return (f);
}
