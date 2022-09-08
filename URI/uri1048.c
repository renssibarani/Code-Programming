#include<stdio.h>

int main(){
	
	float s, salary, t;
	int p;
	char c='%';
	scanf("%f", &s);
	if(s>=0.00 && s<= 400.00){
		t=(s*15)/100;
		salary =s+t;
		p=15;
	}else if (s>400.00 && s<=800){
		t=(s*12)/100;
		salary =s+t;
		p=12;
	}else if(s>800.00 && s<= 1200.00){
		t=(s*10)/100;
		salary =s+t;
		p=10;
	}else if(s>1200.00 && s<= 2000.00){
		t=(s*7)/100;
		salary =s+t;
		p=7;
	}else if(s>2000.00){
		t=(s*4)/100;
		salary =s+t;
		p=4;
	}
	printf("Novo salario: %.2f\n", salary);
	printf("Reajuste ganho: %.2f\n", t);
	printf("Em percentual: %d %c\n", p, c);
	
	return 0;
}
