#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef enum{
    pocet,
    hmotnost
} Pocetnost;

typedef union{
    int pocet;
    float hmotnost;
} Mnozstvo;
typedef struct obchod_potraviny{
    char nazov[50];
    char vyrobca[50];
    Pocetnost jednotka;
    Mnozstvo mnozstvo;
    float cena;
    struct obchod_potraviny *next;
} Sortiment;


void funkcia_Pridaj(Sortiment **zoznam);
void funkciaZmaz(Sortiment **zoznam);
void funkciaVypis(Sortiment *zoznam);

int main(){
    Sortiment *zoznam = NULL;
    int koniec = 0;
    int pocet;
    char prikaz;
    do{
        printf("Zadaj pismenko:\n");
        scanf("%c", &prikaz);

        printf("\t***Obchod***\n\nv - ak chces vypisat tovarA\n p - ak chces pridat tovar\nz - ak chces zmazat tovar");

        switch(prikaz){
            case 'v':
                funkciaVypis(zoznam);
                break;
            case 'p':
                funkcia_Pridaj(&zoznam);
                break;
            case 'z':
                funkciaZmaz(&zoznam);
                break;


            default:
                printf("Nespravny prikaz.\n");
                koniec = 1;
        }
    } while (koniec != 1);

    return 0;
}

void funkcia_Pridaj(Sortiment **zoznam){
    char nazov[50];
    char pom;
    float cena;
    char vyrobca[50];
    int counter;

    Sortiment *novyTovar = (Sortiment*)malloc(sizeof(Sortiment));
    if(novyTovar == NULL) {
        printf("Chyba alokacie pamate!\n");
        return;
    }

    printf("Zadajte nazov: \n");
    scanf("%s", nazov);

    printf("Zadajte vyrobcu: \n");
    scanf("%s", vyrobca);
    do{
        printf("Ak je cena udana v hmotnosti zadajte H a ak je v pocte zadajte P: \n");
        scanf(" %c", &pom);
        if (pom == 'H'){
            printf("Zadajte hmotnost tovaru:\n");

            scanf("%f", &novyTovar->mnozstvo.hmotnost);
            novyTovar->jednotka = hmotnost;
        }
        else if(pom == 'P'){
            printf("Zadajte pocet tovaru:\n");
            scanf("%d", &novyTovar->mnozstvo.pocet);
            novyTovar->jednotka = pocet;
        }
        else{
            printf("zly vstup");
        }
    } while ( pom != 'H' && pom !='P');
    printf("Zadaj cenu: \n");
    scanf("%f", &cena);

    strcpy(novyTovar->nazov, nazov);

    strcpy(novyTovar->vyrobca, vyrobca);
    novyTovar->cena = cena;
    novyTovar->next = NULL;

    if (*zoznam == NULL || strcmp(nazov, (*zoznam)->nazov) < 0) {
        //novyTovar->next = **zoznam;
        novyTovar->next = *zoznam;
        *zoznam = novyTovar;
    } else {
        Sortiment *current = *zoznam;
        while (current->next != NULL && strcmp(nazov, current->next->nazov) > 0) {
            current = current->next;
        }
        novyTovar->next = current->next;

        current->next = novyTovar;
    }
    printf("Tovar %s bol pridany.\n", nazov);
}
void funkciaZmaz(Sortiment **zoznam){
    char meno[50];
    int counter2 = 0;
    printf("Zadajte nazov pre tovar, ktory sa ma vymazat: ");
    scanf("%s", meno);

    if (*zoznam == NULL) {
        printf("Zoznam tovaru je prazdny.\n");
        return;
    }

    Sortiment *current = *zoznam;

    Sortiment *prev = NULL;

    if (strcmp(current->nazov, meno) == 0) {
        *zoznam = current->next;
        free(current);
        printf("Tovar %s sa odstranil.\n", meno);
        return;
    }

    while (current != NULL && strcmp(current->nazov, meno) != 0) {
        /*prev = current;
        next = current->next*/

        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Tovar %s sa nenasiel.\n", meno);
        return;
    }

    prev->next = current->next;
    free(current);
    printf("Tovar %s bol odstraneny.\n", meno);
}


void funkciaVypis(Sortiment *zoznam){
    Sortiment *current = zoznam;


    if (current == NULL) {
        printf("V zozname nic nieje.\n");
        return;
    }

    printf("Teraz je v zozname:\n");
    while (current != NULL) {
        printf("Nazov: %s\n", current->nazov);
        printf("Vyrobca: %s\n", current->vyrobca);

        if (current->jednotka == hmotnost) {
            printf("Mnozstvo v kg: %.2f \n", current->mnozstvo.hmotnost);
        } else if (current->jednotka == pocet) {

            printf("Mnozstvo na ks: %d \n", current->mnozstvo.pocet);
        }

        printf("Cena je: %.2f\n", current->cena);
        printf("\n");

        current = current->next;

    }
}