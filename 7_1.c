#include <stdio.h>




int magicky(int n,int field[][20]){
    int sucet = 0;
    for(int i = 0; i < n; i++){
        sucet += field[i][i];
    }
    int sum = sucet;
    sucet = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sucet += field[i][j];
        }
        if(sucet!= sum){
            printf("nie\n");
            return 0;
        }
        sucet = 0;
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sucet += field[j][i];
        }
        if(sucet!= sum){
            printf("nie\n");
            return 0;
        }
        sucet = 0;
    }
    for(int i = 0; i < n; i++){
        sucet += field[i][n-i-1];
    }
    if(sucet!= sum){
        printf("nie\n");
        return 0;
    }
    return 1;
}

int main(void){
    int N = 20;
    int field[N][N];
    int n = 0;
    scanf("%d", &n);
    if(n>N){
        printf("Chybny vstup\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &field[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", field[i][j]);
        }
        printf("\n");
    }
    if(magicky(n, field)== 1){
        printf("je magicky\n");
    }
    else{
        printf("nie je magicky\n");
    }


}