#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char string[20];
    char **pole_stringov;
    int p;
    int dlzka;
    printf("Zadaj pocet retazcov: \n");
    scanf("%d", &p);
    printf("Zadavaj retazce. \n");
    pole_stringov = (char **) malloc(p * sizeof(char *));
    for(int i = 0; i < p; i++){
        scanf("%s", string);
        while(string[dlzka] != '\0'){
            dlzka++;
        }
        pole_stringov[i] = (char *) malloc((dlzka+1) * sizeof(char));
        strcpy(pole_stringov[i], string);
        dlzka = 0;
    }
    for(int i = 0; i < p; i++){
        printf("%s\n", pole_stringov[i]);
    }
}