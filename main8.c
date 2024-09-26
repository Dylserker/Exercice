#include <stdio.h>
#include <stdlib.h>

int main() {
    char operation;

    printf("Choisissez un signe d'opération (+, -, /, *, %) : ");
    scanf(" %c", &operation); // L'espace avant %c permet d'ignorer les espaces blancs

    if (operation == '+') {
        printf("L'opération est une addition.\n");
    } else if (operation == '-') {
        printf("L'opération est une soustraction.\n");
    } else if (operation == '*') {
        printf("L'opération est une multiplication.\n");
    } else if (operation == '/') {
        printf("L'opération est une division.\n");
    } else if (operation == '%') {
        printf("L'opération est un module.\n");
    } else {
        printf("L'opération n'existe pas.\n");
    }

    return 0; // Code de fin 0
}
