#include <stdio.h>

int main()
{
    int first, second, result;
    printf("Program Kalkulator Perkalian Sederhana\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &first);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &second);
    result = first*second;
    printf("Hasil: %d", result);

    return 0;
}
