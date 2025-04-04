#include <stdio.h>
#include <math.h>

int main(){
    int pocet, k, i, pocitadlo;
    pocitadlo=0;
    scanf("%d", &pocet);
    for(i=0;i<=(pocet-1);i++){
        if(pocet>0) {
            scanf("%d", &k);
            if (k > 0 && k <= 100) {
                pocitadlo++;
            }
            k=0;
        }
    }
    printf("%d", pocitadlo);
}
