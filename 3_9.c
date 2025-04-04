#include <stdio.h>


int parne(int X[], int pocetx, int Y[]){
    int pocet = 0;
    int i;
    for(i=0; i<pocetx; i++){
        if(X[i]%2==0){
            Y[pocet++]=X[i];
        }
    }
    return pocet;
}


int main(){
    int pocetx, i, cislo;

    //vytvorenie pola x //
    printf("Zadaj pocet prvkov: \n");
    scanf("%d",&pocetx);
    int X[pocetx];
    printf("Zadavaj cisla: \n");
    for(i=0;i<pocetx;i++){
        scanf("%d",&cislo);
        X[i]=cislo;
    }

    printf("Zadaj pocet prvkov na kopirovanie: \n");
    scanf("%d",&pocetx);
    int Y[pocetx], pocety;
    pocety = parne(X,pocetx,Y);
    printf("Pocet parnych cisel: %d \n", pocety);

    //vypis pola Y //
    printf("Y = {%d", Y[0]);
    for(i=1;i<pocety;i++){
        printf(", %d", Y[i]);
    }
    printf("}");

    return 0;
}