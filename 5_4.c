#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int vymen(int *p_a, int *p_b){
    int *p_c;
    p_c = p_a;
    p_a= p_b;
    p_b= p_c;
    printf("adresa p_a je: %p a jej hodnota je: %d \n", p_a, *p_a);
    printf("adresa p_b je: %p a jej hodnota je: %d \n", p_b, *p_b);

}

int main(){
    int a = 10, b= 14;
    printf("adresa p_a je: %p a jej hodnota je: %d \n", &a, a);
    printf("adresa p_b je: %p a jej hodnota je: %d \n", &b, b);
    vymen(&a, &b);
}
