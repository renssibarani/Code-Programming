#include <stdio.h>
int main (){
	
int A, B, C, D;

scanf("%d %d %d", &A, &B, &C);

D=(A+B+abs(A-B))/2;
D=(D+C+abs(D-C))/2;

printf("%d eh o maior\n", D);

return 0;
}

