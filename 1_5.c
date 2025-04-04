#include <stdio.h>

int main() {
    int C1, C2;
    scanf("%d %d",&C1, &C2);
    if (C1>C2) {
        printf("cislo C1=%d je vacsie ako cislo C2=%d",C1, C2);
    }
    else {
        printf("cislo C1=%d je mensie ako cislo C2=%d",C1, C2);
    }
}
