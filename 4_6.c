#include <stdio.h>

int main(){
    FILE* fw;
    int i;
    double cislo, vysledok;
    scanf("%lf",&cislo);
    fw= fopen("textik .txt", "w");
    for (i=1;i<=10;i++){
        vysledok=i*cislo;
        printf("%lf", cislo);
        fprintf(fw, "%d * %.2lf = %.2lf \n", i, cislo, vysledok);
    }
    fclose(fw);
    return 0;
}
