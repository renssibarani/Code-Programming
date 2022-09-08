#include <stdio.h>

int main (){
	
int A, B, abs;
float MaiorAB;

scanf("%d %d %d", &A, &B, &abs);

MaiorAB=((A+B)+(abs*(A-B)))/2;

if (A>B)
{     
if (A>abs)
{           
printf("%d eh o maior",A);     
}
}else{     
if (B>abs)
{       
printf("%d eh o maior",B);   
}else{       
printf("%d eh o maior",abs);   
 } 
}
return 0;
}
