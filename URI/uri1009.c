#include <stdio.h>
int main (){
	
double RECEIVE, HOUR, SALARY;
char NAMA;
scanf("%s\n", &NAMA);
scanf("%lf\n", &RECEIVE);
scanf("%lf", &HOUR);

SALARY=(HOUR*0.15)+RECEIVE;

printf("TOTAL = R$ %0.2lf\n", SALARY);

return 0;
}
