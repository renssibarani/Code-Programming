#include<stdio.h>

int main(){
	
int X;
double Y, V;

scanf("%d\n", &X);
scanf("%lf\n", &Y);

V=X/Y;

printf("%0.3lf km/l\n", V);

return 0;
}
