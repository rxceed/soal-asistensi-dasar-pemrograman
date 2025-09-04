#include <stdio.h>

int main()
{
    float pi = 3.14;
    float radius;
    printf("Menghitung luas dan keliling lingkaran\n Masukkan jari-jari lingkaran: ");
    scanf("%d", &radius);
    int area = radius*radius*pi;
    int circumference = radius+radius*pi;
    printf("Luas lingkaran: %d \n Keliling lingkaran: %d", area, circumference);
    return 0;
}
