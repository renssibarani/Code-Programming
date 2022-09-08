#include <stdio.h>

int main()
{
	float A, B;

	scanf("%f", &A);

	if (A >= 0 && A <= 2000)
	{
		printf("Isento\n");
	}else if (A > 2000 && A <= 3000){
		B= (8*(A - 2000))/100;
		printf("R$ %.2f\n", B); 
	}else if (A > 3000 && A <= 4500){
		B= ((1000*8)/100)+(((A-3000)* 18)/100);
		printf("R$ %.2f\n", B);
	}else {
		B= ((1000*8)+(1500*18)+((A -4500)* 28))/100;
		printf("R$ %.2f\n", B);
	}
	return 0;
}
