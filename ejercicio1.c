#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i,j;
    printf("Ingrese el numero de posiciones del vector: ");
    scanf("%d",&n);
    int *puntero,vector[n];
    puntero=&vector;
    printf("\nIngresando vector:\n");
    //LLENANDO EL VECTOR
    for (i = 0; i < n; i++) {
        printf("Posicion %d: ",i+1);
        scanf("%d",&*puntero+i);
    }
    printf("\nEl vector es:\n");
    //MOSTRANDO EL VECTOR
    for (j = 0; j<n; j++) {
        printf("%d  %p\n", *puntero, puntero);
        puntero++;
    }
    return 0;
}
