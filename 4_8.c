#include <stdio.h>

int main(){
    char znak, x[100];
    scanf("%ch", &znak);
    FILE *f_1=fopen("C:\\Users\\asus\\CLionProjects\\untitled3\\slova.txt","r");
    if (znak == 's'){
        FILE* f_2= fopen("exit.txt","w");
        while(fgets(x,20,f_1)!=NULL){
            fprintf("f_2", "%s",x);
        }
        fclose(f_2);
    }
    else {
            while(fgets(x,20,f_1)!=EOF){
                printf("%s", x);
            }

    }
    fclose(f_1);
    return 0;

}
