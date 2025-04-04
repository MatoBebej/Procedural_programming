#include <stdio.h>
#include<math.h>
#include <stdlib.h>


/* je tam len 1 funkcia
int alokuj_1D_pole(int rozmery){
    int *p, cislo, max, min, teraz;
    p = (int*)malloc(rozmery* sizeof (int));
    for (int i=0;i<rozmery ;i++){
        scanf("%d \n", &cislo);
        *(p+i)=cislo; //to iste ako p[i]
    }
    for (int i=0;i<rozmery;i++){
        printf("%d ", p[i]);
    }
    max=p[0];
    for (int i=0;i<rozmery;i++){
        teraz= p[i];
        if (teraz>max){
            max=teraz;
        }
    }
    min=p[0];
    printf("maximum je %d", max);
    for (int i=0;i<rozmery;i++) {
        teraz = p[i];
        if (teraz < min) {
            min = teraz;
        }
    }
    printf("minimum je %d", min);

}


int main(){
    int rozmery;
    scanf("%d",&rozmery);
    alokuj_1D_pole(rozmery);

}
*/
int minimum(int rozmery, int *p){
    int teraz;
    int pozicia;
    int min=p[0];
    for (int i=0;i<rozmery;i++){
        teraz=p[i];
        if (teraz<min){
            min=teraz;
            pozicia=i;
        }
    }
    printf("minimum je: %d a jeho pozicia je %d: \n",min, pozicia);
}
int maximum(int rozmery, int *p){
    int pozicia=0;
    int teraz;
    int max=p[0];
    for (int i=0;i<rozmery;i++){
        teraz=p[i];
        if (teraz>max){
            max=teraz;
            pozicia=i;
        }
    }
    printf("maximum je: %d a jeho pozicia je: %d\n",max, pozicia);
}

int vykresli_pole(int rozmery, int *p){
    for (int i=0;i<rozmery;i++){
        printf("%d ", *(p+i));

    }
    printf("\n");

}
int* alokuj_1D_pole(int rozmery){
    int *p, cislo;
    p = (int*)malloc(rozmery* sizeof (int));
    for (int i=0;i<rozmery ;i++){
        scanf(" %d", &cislo);
        *(p+i)=cislo; //to iste ako p[i]
    }
    return p;
}


int main(){
    int rozmery;
    int *p;
    scanf("%d",&rozmery);
    p = alokuj_1D_pole(rozmery);
    vykresli_pole(rozmery, p);
    maximum(rozmery, p);
    minimum(rozmery, p);
    free(p);

}