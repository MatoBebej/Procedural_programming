#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int nacitaj(float *dlzka, float *vyska){
    float cislo_1, cislo2;
    scanf("%f %f",&cislo_1, &cislo2);
    *vyska= cislo_1;
    *dlzka= cislo2;
}

int vypocitaj(float *par_1, float *par_2){
    float obsah, obvod;
    obsah=*par_1 * *par_2;
    obvod=2*(*par_1)+2*(*par_2);
    printf("obsah je: %.3f a obvod je: %.3f", obsah, obvod);

}

int main() {
    float a=0, b=0;
    nacitaj(&a,&b);
    printf("dlzka je: %.3f a vyska je: %.3f \n", a, b);
    vypocitaj(&a,&b);

}
