#include <stdio.h>

int nep_cisla(int vstup, int sucet) {

    if (vstup >= 1) {
        if (vstup % 2 != 0) {
            printf("%d \n", vstup);
            sucet =sucet+ vstup;
            return nep_cisla(vstup - 1,sucet);
        } else {
            return nep_cisla(vstup - 1,sucet);
        }
    }
    printf("sucet je : %d", sucet);
    return 0;
}
int main(){
    int vstup,x = 0;
    scanf("%d", &vstup);
    nep_cisla(vstup,x);
}
/* 4. ale lepsie
int nep_cisla(int vstup) {

    if (vstup >= 1) {
        if (vstup % 2 != 0) {
            printf("%d \n", vstup);
            return nep_cisla(vstup - 1)+vstup;
        } else {
            return nep_cisla(vstup - 1);
        }
    }
}
int main(){
    int vstup;
    scanf("%d", &vstup);
    printf("%d", nep_cisla(vstup));
}
*/