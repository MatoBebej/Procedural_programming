#include <stdio.h>

int main(){
    float sucet=0, cislo;
    FILE *fr= fopen("C:\\Users\\asus\\CLionProjects\\untitled3\\cisla.txt","r");
    if (fr==NULL){
        printf("subor nebol najdeny \n");
        return 1;
    }
    while(fscanf(fr,"%f", &cislo) == 1){
        sucet+=cislo;
        printf("%f \n", cislo);
    }
    fclose(fr);
    if(fr != NULL){
        printf("%f", sucet);
    }
    return 0;
}
