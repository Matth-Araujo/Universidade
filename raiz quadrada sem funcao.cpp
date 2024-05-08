#include <stdio.h>

double raiz_quadrada(double numero) {
    double erro = 0.00001; // Define a precisão do resultado
    double s = numero;

    while ((s - numero/s) > erro) {
        s = (s + numero/s) / 2;
    }

    return s;
}

int main() {
    double numero;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    // Calculando a raiz quadrada
    double raiz = raiz_quadrada(numero);

    printf("A raiz quadrada de %.2lf eh %.2lf\n", numero, raiz);

    return 0;
}

