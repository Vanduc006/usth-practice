#include <stdio.h>

int main() {
    // printf("hello world");

    // int namsinh;
    // scanf("%d",&namsinh);
    // printf("Tuoi cua ban la %2d",2025-namsinh);
    // nhap nam sinh -> tuoi

    //tinh trung binh cua 3 so
    float a[3]; //1 2 3 -> so 1.2
    int size = 3; // -> 1 2 3
    for ( int i = 0; i < size; i++) {
        printf("Nhap gia tri cho so thu %d:",i);
        scanf("%f",&a[i]);
    }
    float average;
    for (int i = 0; i < size; i++) {
        average = (a[i] / size ) + average;
    }
    printf("Gia tri trung binh la %f",average);

}