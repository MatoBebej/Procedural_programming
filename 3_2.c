#include <stdio.h>
#include <math.h>

int main(){
    #define N 11
    int i ,pole[N], cislo;
    for (i = 0; i < N; i++) {
        scanf("%d", &cislo);
        pole[i] = cislo;
    }

    if(pole[0]>=0 && pole[0]<=10) {
        for (i=1; i < N; i++) {
            if (pole[i] > (2 * pole[i - 1])|| pole[i] < (0.5 * pole[i - 1])) {
                printf("postupnost je nespravna");
                return 0;
            }
        }
        printf("postupnost je spravna");
    }
    else {
        printf("postupnost nie je spravna");
    }
    return 0;
}
