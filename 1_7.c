#include <stdio.h>

int main() {
    int c1, c2, vysledok;
    char znamienko;
    scanf("%d %d %c", &c1, &c2, &znamienko);
    switch(znamienko) {
        case '+':
            printf("%d %c %d = %d", c1, znamienko, c2, c1+c2);
            break;
        case '-':
            printf("%d %c %d = %d", c1, znamienko, c2, c1-c2);
            break;
        case '*':
            printf("%d %c %d = %d", c1, znamienko, c2, c1*c2);
            break;
        case '/':
            printf("%d %c %d = %d", c1, znamienko, c2, c1/c2);
            break;
        default:
            printf("Zle zadana volba");

    }
    return 0;
}
