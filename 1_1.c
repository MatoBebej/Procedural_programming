#include <stdio.h>

int main() {
    float cislo_1, cislo_2, cislo_3, priemer;
    scanf("%f %f %f",&cislo_1, &cislo_2, &cislo_3);
    priemer=((cislo_1 + cislo_2 + cislo_3)/3);
    printf("Priemer cisel %g %g %g je: %g", cislo_1, cislo_2, cislo_3, priemer);
}

