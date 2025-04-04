#include <stdio.h>
#include <math.h>

int main(){
    int N, i, poradie, n;
    poradie=1;
    scanf("%d",&N);
    n=N;
    if (N>1 && N<15){
        for (poradie; poradie<=n;poradie++){
            printf("%d :",poradie);
            for(i=N;i>0;i--){
                printf("%d ", i);
            }
            N--;
            printf("\n");
        }

    }
}

