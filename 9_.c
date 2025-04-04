#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
// neviem ako zistit ci clovek nezadal meno a stlacil iba enter - vtedy by prestalo ziadat mena a zacolo by ich len printovat
// skusil som prazdne nastavit na \0 alebo \n  ale to nefungovalo
#define pocet 100
int main(){
    char slova[pocet][10];
    char prazdne[]="x";
    int kolko=0;
    printf("napis x pre koniec zoznamu\n");
    printf("napis mena:\n");
    for (int i = 0; i < pocet; ++i) {
        scanf("%s", slova[i]);
        if (strcmp(prazdne, slova[i])==0){
            break;
        }
        kolko++;

    }
    printf("pisem mena:\n");
    for (int i = 0; i < kolko; ++i) {
        printf("%s\n", slova[i]);
    }
}

*/
#define MAX_PEOPLE 100
// tu pocet ludi zistujem scanom z mianu- mozno by bolo lepsie pouzit plny pocet (100) a potom realloc ale neviem ci to je potrebne
void hladaj_max(char *mena[], int pocetMien) {
    int pocet[MAX_PEOPLE] = {0};

    // zistovanie kolkokrat tam je kazde meno
    for (int i = 0; i < pocetMien; i++) {
        for (int j = i; j < pocetMien; j++) {
            if (strcmp(mena[i], mena[j]) == 0) {
                pocet[i]++;
            }
        }
    }

    // tu zistujem maximum
    int maxPocet = 0;
    for (int i = 0; i < pocetMien; i++) {
        if (pocet[i] > maxPocet) {
            maxPocet = pocet[i];
        }
    }

    // vypisanie mena ktore chodi najcastejsie do kina
    printf("Najcastejsie navstevovane kino:\n");
    for (int i = 0; i < pocetMien; i++) {
        if (pocet[i] == maxPocet) {
            printf("%s\n", mena[i]);
            //printf("%d\n", pocet[i]);
            //keby sme chceli vediet aj kolkokrat kino navstivil
        }
    }
}

int main() {
    char *mena[MAX_PEOPLE];
    int pocetMien;

    printf("Zadajte pocet ludi: ");
    scanf("%d", &pocetMien);

    if (pocetMien > MAX_PEOPLE) {
        printf("Chyba: Prilis vela ludi.\n");
        return 1;
    }

    printf("Zadajte mena ludi (bez medzier):\n");
    for (int i = 0; i < pocetMien; i++) {
        mena[i] = (char *)malloc(20 * sizeof(char)); // Allokujeme kazde meno
        scanf("%s", mena[i]);
    }

    hladaj_max(mena, pocetMien);

    // Uvolnime pamat po skonceni programu
    for (int i = 0; i < pocetMien; i++) {
        free(mena[i]);
    }

    return 0;
}

