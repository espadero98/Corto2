#include <stdio.h>
#include <stdlib.h>
void invertir(int digito) {
    printf("%d", digito % 10);
    if (digito > 10) {
        invertir(digito / 10);
    }
}
void main() {
    int num;
    printf("Ingrese el numero a invertir: ");
    scanf("%d", &num);
    printf("Numero ingresado: %d\n", num);
    printf("Numero invertido: ");
    invertir(num);
    printf("\n");
}
