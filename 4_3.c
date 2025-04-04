#include <stdio.h>


long reverzne_cislo(long zadane){
    int cislo=0;
    int dane=zadane;
    while(zadane>0){
        cislo=zadane%10;
        printf("%d",cislo);
        zadane=zadane/10;
    }

}

int main(){
    int zadane;
    scanf("%d",& zadane);
    reverzne_cislo(zadane);
}
