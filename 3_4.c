#include <stdio.h>
#include <math.h>

int main() {
    int cislo, i, vysledok;
    vysledok=1;
    i=1;
    scanf("%d", &cislo);
    if(cislo>0){
        for(i; i <(cislo+1); ++i){
            vysledok=vysledok*i;

        }
    printf("faktorial %d je %d", cislo, vysledok);
    }
    else
        printf("nezadal si kladne cele cislo");
}
