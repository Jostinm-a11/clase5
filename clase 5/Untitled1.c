
#include <stdio.h>

int main() {
    // Declaración de variables
    int consumo_min, consumo_max;
    float costo_galon, precio_por_km;

    // Lectura de datos
    printf("Ingrese el consumo mínimo en L/100 km: ");
    scanf("%d", &consumo_min);

    printf("Ingrese el consumo máximo en L/100 km: ");
    scanf("%d", &consumo_max);

    printf("Ingrese el costo del galón de combustible: ");
    scanf("%f", &costo_galon);

    // Mostrar cabecera de la tabla
    printf("\nConsumo (L/100km) \t Precio por km\n");

    // Calcular y mostrar los precios por km
    for (int consumo = consumo_min; consumo <= consumo_max; consumo++) {
        precio_por_km = costo_galon / (100.0 / consumo);
        printf("%d \t\t\t %0.2f\n", consumo, precio_por_km);
    }

    return 0;
}
