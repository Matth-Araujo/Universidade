#include <stdio.h>

int main() {
    char nome[100]; // Definimos um array para armazenar o nome do usu�rio

    printf("Digite seu nome: ");
    scanf("%s", nome); // Usamos %s para ler uma string (nome)

    printf("Ol�, %s!\n", nome); // Exibimos o nome digitado pelo usu�rio
}
