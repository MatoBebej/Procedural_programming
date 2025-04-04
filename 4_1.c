#include <stdio.h>

int je_prvocislo(int i){
    int y;
    if(i<=1){
        return -1;
    }
    for(y=2; y<i; y++){
        if(i%y==0){
            return -1;
        }

    }
    printf("%d\n",i);
    return 1;

}

int main() {
    int cislo_1, cislo_2, i;
    scanf("%d %d",&cislo_1, &cislo_2);
    for(i=cislo_1;i<=cislo_2;i++){
        je_prvocislo(i);
    }
}
