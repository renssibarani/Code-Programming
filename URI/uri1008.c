#include <stdio.h>
int main (){
	
int	NUMBER, RECEIVE;
double HOUR, SALARY;

scanf("%i\n", &NUMBER);
scanf("%i\n", &RECEIVE);
scanf("%lf", &HOUR);

SALARY=RECEIVE*HOUR;

printf("NUMBER = %i\n", NUMBER);
printf("SALARY = U$ %0.2lf\n", SALARY);

return 0;
}
