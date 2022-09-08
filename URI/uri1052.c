#include<stdio.h>

int main(){
	int x;
	char umur[12] = {"januari", "februari", "maret", "april", "mei", "juni", "juli", "agustus", "september", "oktober", "november", "desember"};
	
	scanf("%d", &x);
	
	printf("%c\n", umur[x-1]);
	return 0;
}
