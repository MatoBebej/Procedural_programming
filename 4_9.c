#include <stdio.h>

int main() {
    FILE *fr;
    fr = fopen("text.txt","r");
    char znak;
    int pocet_medzier, koniec;
    pocet_medzier = koniec = 0;
    while((znak = getc(fr)) != EOF && koniec == 0){
        if (znak == 'x' || znak == 'X'){
            printf("Precital som X \n");
        }
        else if (znak == 'y' || znak == 'Y'){
            printf("Precital som Y \n");
        }
        else if (znak == '$' || znak == '#' || znak == '&'){
            printf("Precital som riadiaci znak \n");
        }
        else if (znak == ' '){
            pocet_medzier++;
        }
        else if (znak == '*'){
            koniec++;
            printf("Koniec \n");
        }
    }
    printf("Pocet medzier v texte je %d \n", pocet_medzier);
    fclose(fr);
    return 0;
}