#include <stdio.h>
#include <math.h>

void nasobok(double cislo, int krat){
    int i;
    double vysledok;
    vysledok=0;
    for(i=1;i<=krat;i++){
        vysledok=(vysledok+cislo);
        printf("%.2lf * %d = %.2lf \n",cislo,i, vysledok);

    }
}
int main(){
    double cislo;
    int krat;
    scanf("%lf %d",&cislo, &krat);
    nasobok(cislo, krat);
    return 0;
}
