#include <stdlib.h>
#include <stdio.h>

int main() {
    int nombre;

    printf("Veuillez saisir un nombre différent de 0 : ");
    scanf("%d", &nombre);

    if (nombre == 0) {
        printf("Le nombre doit être différent de 0.\n");
        return 1; // Code d'erreur
    }

    for (int i = 0; i <= nombre; i++) {
        printf("%d\n", i);
    }

    return 0; // Code de fin 0
}
