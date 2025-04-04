#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    char pole[N][N];
    int znak='a';
    for (int i=0; i<N;i++){
        for (int j=0; j<N; j++){
            if ((i % 2)!=0){
                pole[i][N-j-1]= znak++;
            }
            else{
                pole[i][j]=znak++;
            }
            if (znak>'z'){
                znak='a';
            }
        }
    }
    for (int i=0;i<N; i++){
        for (int j=0; j<N; j++ ){
            printf("%c ", pole[i][j]);
        }
        printf("\n");
    }
}