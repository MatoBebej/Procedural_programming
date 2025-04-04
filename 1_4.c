#include <stdio.h>

int main(){
    char pismeno_1, pismeno_2, vysledok_1, vysledok_2;
    int cislo_1, cislo_2;
    scanf("%c %c", &pismeno_1, &pismeno_2);
    cislo_1= ((int)pismeno_1);
    cislo_2= ((int)pismeno_2);
    vysledok_1 = (cislo_1 -32);
    vysledok_2 = (cislo_2 -32);
    printf("%c %d \n",vysledok_1, (int)vysledok_1);
    printf("%c %d",vysledok_2, (int)vysledok_2);
}
