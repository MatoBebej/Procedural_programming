#include <stdio.h>
#include <math.h>

int main(){
    int cislo_1, cislo_2;
    char vysledok;
    scanf("%d %d",&cislo_1, &cislo_2);
    for(int(i)=0;i<=cislo_2;i++) {
        if (i > cislo_1 && i%3==0) {
            printf("%d " , i);
        }
    }

}
