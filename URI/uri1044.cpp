#include<stdio.h>

int main(){
	
	int A, B, X;
	
	scanf("%d %d", &A, &B);
	
	X = A*B;
	if (B % A == 0 || A % B == 0 ){
	printf("Sao Multiplos\n");
	}else{
	printf("Nao sao Multiplos\n");
	}
	return 0;
}
