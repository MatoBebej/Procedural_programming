#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d \n", e / --a * b++ / c++);
    //najskor sa vykonaju operacie typu ++ a --, potom dojde k * a / //
    // (5/(--6)*(++2)/(++2) == 5/5*3/3 = 1 //
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d", a %= b = d = 1 + e / 2);
    //najskor sa vykonaju operacie ako / a %= nasledne + a nakoniec priradzovanie =)//
    //(6%=2 = d = 1 + (5/2)  == 0 = d = 1 + 2 = 0 //
}
