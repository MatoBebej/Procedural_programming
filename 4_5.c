#include <stdio.h>

int cif_suc(int cislo, int sucet){
    if (cislo != 0){
        sucet+=(cislo%10);
        cislo=(cislo/10);
        return cif_suc(cislo, sucet);
    }
    printf("%d",sucet);

}

int main(){
    int cislo, sucet=0;
    scanf("%d",&cislo);
    cif_suc(cislo, sucet);
}
