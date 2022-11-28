#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++){
            if(i%2 == 0 && j % 2==0){
                printf("#");
            } else if(i%2 == 1 && j%2 == 1){
                printf("*");
            } else {
                printf("$");
            }
        }
        printf("\n");
  }  
    return 0;
}