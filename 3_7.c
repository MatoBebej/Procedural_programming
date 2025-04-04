#include <stdio.h>
#include <math.h>

void  mocnina(double cislo, int exponent){
    int i;
    double vysledok;
    for(i=1;i<= exponent;i++){
        vysledok=pow(cislo,i);
        printf("%.2lf^%d %.2lf \n",cislo, i, vysledok);
    }
}
int main(){
    double cislo;
    int exponent;
    scanf("%lf %d",&cislo, &exponent);
    mocnina(cislo, exponent);
}
