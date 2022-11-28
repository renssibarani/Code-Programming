#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float tehmanis = (a * 5000)* 0.1; //teh manis disc 10%
    float nasigoreng = (b * 10000)*0.15;//nasigoreng disc 15%
    float kerupuk = (c * 2000);
    printf("%.3f\n", tehmanis+nasigoreng+kerupuk);//tiga di belakang koma
   
    return 0;
}
