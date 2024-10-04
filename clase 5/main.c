#include <stdio.h>

int main()
{
    float I, GALprecio;
    float C_MIN, C_MAX, PRECIO;

    printf("\nIngrese el valor minimo de consumo: ");
    scanf("%f", &C_MIN);

    printf("\nIngrese el valor maximo de consumo: ");
    scanf("%f", &C_MAX);

    printf("\nIngrese el precio de la gasolina por galon: ");
    scanf("%f", &PRECIO);

    for (I = C_MIN; I <= C_MAX; I++)
    {
        GALprecio = 0.0026 * I * PRECIO;
        printf("Consumo: %-4.2f - Precio: %-19.2f \n", I, GALprecio);
    }

    return 0;
}



