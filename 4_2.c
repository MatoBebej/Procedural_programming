#include <stdio.h>

double tyzdenna_mzda(double plat, double hodiny, double celok){
    double vysledok;
    if (hodiny<40){
        vysledok=hodiny*plat;
        printf("%.2lf \n", vysledok);
        celok+=vysledok;
        return celok;
    }
    if (hodiny>=40 && hodiny<60){
        vysledok=(40*plat)+((hodiny-40)*1.5*plat);
        printf("%.2lf \n",vysledok);
        celok+=vysledok;
        return celok;
    }
    if (hodiny>=60){
        vysledok=(40*plat)+(20*1.5*plat)+((hodiny-60)*2*plat);
        printf("%.2lf \n", vysledok);
        celok+=vysledok;
        return celok;
    }
}

int main(){
    int vstupy, i;
    double hodiny, plat, celok, vysledok;
    celok = 0;
    scanf("%d",&vstupy);
    for (i=0;i<vstupy;i++){
        scanf("%lf %lf", &plat, &hodiny);
        tyzdenna_mzda(plat, hodiny, celok);
    }
    printf("%lf", celok);
}
