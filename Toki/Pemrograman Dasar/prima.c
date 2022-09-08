#include<stdio.h>
int main(){
	int a;
	int b=1;
	int counter=0;
	
	scanf("%d",&a);
	
	if(a < 2){
		printf("Bukan Prima\n");
	}
	
	else{
	
	do{
		if(a % b==0){
			counter++;
		}
		
		b++;
	}
	while(b <= a);
	
		if(counter > 2){
			printf("Bukan Prima\n");
		}
		else{
			printf("Prima\n");
		}
	
	}
	return 0;
}
