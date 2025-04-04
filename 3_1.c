#include <stdio.h>
#include <math.h>

int main() {
    int pocet, i;
    float cislo, min, max, nove;
    scanf("%d", &pocet);
    scanf("%f", &cislo);
    max= cislo;
    min= cislo;
    for(i=2; i<(pocet+1); i++){
       scanf("%f", &nove);
       if(nove>max){
           max=nove;
       }
       if(nove<min){
           min=nove;
       }
    }
    printf("Minimum je: %g \n", min);
    printf("Maximum je: %g", max);
}


