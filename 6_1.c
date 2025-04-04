#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
    int pocet;
    char *p ;
    scanf("%d", &pocet);
    p=(char*)malloc(pocet * sizeof(char));
    for(int i=0; i<pocet;i++){
        scanf(" %c", (p+i));
    }
    for(int i=pocet-1; i+1>0;i--){
        printf("%c", *(p+i));
    }
    return 0;
}
