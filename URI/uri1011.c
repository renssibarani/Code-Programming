#include <stdio.h>
int main (){
	
double phi=3.14159, R, VOLUME;

scanf("%lf", &R);

VOLUME=(4.0/3)*(phi*(R*R*R));

printf("VOLUME = %0.3lf", VOLUME);

return 0;
}
