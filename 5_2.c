#include <stdio.h>
#include<math.h>
#include <stdlib.h>



int maximum(int *a, int *b){
    if (*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}

int main(){
    int cislo_1, cislo_2;
    scanf("%d %d", &cislo_1, &cislo_2);
    printf("vacsie cislo je: %d",maximum(&cislo_1, &cislo_2));
    return 0;

}
