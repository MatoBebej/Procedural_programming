#include <stdio.h>
#include<math.h>
#include <stdlib.h>


int delitele(int x[], int pocetx, int y[], int cislo){
    int pocety=0;
    int pozicia=0;

    for(int i=0; i< pocetx; i++){
        if(cislo%x[i]==0){
            y[pozicia]=x[i];
            pocety+=1;
            pozicia+=1;
        }
    }
    printf("%d \n", pocety);
    printf("{");
    for (int i=0; i< pocety; i++){
        printf(" %d ", y[i]);
    }
    printf("}");
}

int main(){
    int x[]={4, 7, 10, 2, 3, 9, 6, 5, 8, 12};
    int y[9];
    int pocetx=10;
    int cislo;
    scanf("%d", &cislo);
    delitele(x, pocetx, y, cislo);
}
