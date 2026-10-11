#include <stdio.h>

int main(void) {
    double posicionInicial, velocidadInicial, tiempoTranscurrido, aceleracion;

    printf("Ingresa la posición inicial: ");
    scanf("%lf", &posicionInicial);

    printf("Ingresa la velocidad inicial: ");
    scanf("%lf", &velocidadInicial);

    printf("Ingresa la aceleracion: ");
    scanf("%lf", &aceleracion);

    printf("Ingresa el tiempo transcurrido: ");
    scanf("%lf", &tiempoTranscurrido);

    /*   double tiempo1 = (tiempoTranscurrido * tiempoTranscurrido);
       double aceleracion1 = (aceleracion * 0.5);
       double aPorT = (aceleracion1 * tiempo1);
       double vPorT = (velocidadInicial * tiempoTranscurrido);
       double resultado = (posicionInicial + vPorT + aPorT);
   */
    const double resultado = posicionInicial + velocidadInicial
                        * tiempoTranscurrido +0.5 * aceleracion
                            * tiempoTranscurrido * tiempoTranscurrido;
    printf("La posición final del objeto es: %f\n", resultado);
    return 0;
}
