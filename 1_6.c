#include <stdio.h>

int main() {
    int c1, c2, vysledok;
    char znamienko;
    scanf("%d %d %c", &c1, &c2, &znamienko);
    if (znamienko == '+' ){
        vysledok=(c1+c2);
        printf("%d %c %d = %d", c1, znamienko, c2, vysledok);
    }
    else if (znamienko == '-'){
        vysledok=(c1-c2);
        printf("%d %c %d = %d", c1, znamienko, c2, vysledok);
    }
    else if (znamienko == '*'){
        vysledok=(c1*c2);
        printf("%d %c %d = %d", c1, znamienko, c2, vysledok);
    }
    else if (znamienko == '/'){
        vysledok=(c1/c2);
        printf("%d %c %d = %d", c1, znamienko, c2, vysledok);
    }
}
