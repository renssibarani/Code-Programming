#include <stdio.h>
int main (){
	
int A1, B1, A2, B2;
float C1, C2, VALOR;

scanf("%d %d %f",&A1,&B1,&C1);
scanf("%d %d %f",&A2,&B2,&C2);

VALOR=(B1*C1)+(B2*C2);

printf("VALOR A PAGAR : R$ %.2f\n", VALOR);

return 0;
}

