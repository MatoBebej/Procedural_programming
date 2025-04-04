#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int kvadraticka(double *x, double *y, double *z){
    double diskriminant, koren_1, koren_2;
    diskriminant=(*y)*(*y)-4*(*x * *z);
    if (diskriminant==0){
        printf("pocet korenov rovnice je: 1 \n");
        koren_1=((- *y)/(2* *x));
        printf("koren rovnice je: %lf", koren_1);
        return 0;
    }
    else{
        printf("pocet korenov rovnice je: 2 \n");
        koren_1=((- *y)+sqrt(diskriminant*diskriminant))/(2* *x);
        koren_2=((- *y)-sqrt(diskriminant*diskriminant))/(2* *x);
        printf("1. koren rovnice je: %lf \n", koren_1);
        printf("2. koren rovnice je: %lf", koren_2);
        return 0;
    }
}

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    kvadraticka(&a,&b,&c);
}
