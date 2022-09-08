#include<stdio.h>

int main(){
	int i, j;
	for(i=60,j=1;i >= 0;j +=3,i -= 5){
		printf("I=%d J=%d\n", j,i);
	}
	return 0;
}
