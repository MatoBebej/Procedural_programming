#include <stdio.h>

int main(){
    float vyska_m, vaha, vyska_cm, vypocet;
    scanf("%f %f",&vyska_cm, &vaha);
    vyska_m= (vyska_cm/100)*(vyska_cm/100);
//    printf("%f \n",vyska_m); //
    vypocet=(vaha/ vyska_m);
    printf("BMI: %.3f", vypocet);
}

