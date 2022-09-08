#include<stdio.h>

int main(){
	
double X1, X2, Y1, Y2, D, Z;


scanf("%lf %lf\n", &X1, &Y1);
scanf("%lf %lf\n", &X2, &Y2);

D=((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1));

Z=sqrt(D);

printf("%0.4lf\n", Z);

}
