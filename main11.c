#include <stdlib.h>
#include <stdio.h>

int main() {
    char symbole;
    int nombre;

    // Demander à l'utilisateur de saisir un symbole
    printf("Veuillez saisir un symbole (+ ou -) : ");
    scanf(" %c", &symbole); // L'espace avant %c permet d'ignorer les espaces blancs

    // Demander à l'utilisateur de saisir un nombre différent de 0
    printf("Veuillez saisir un nombre différent de 0 : ");
    scanf("%d", &nombre);

    if (nombre == 0) {
        printf("Le nombre doit être différent de 0.\n");
        return 1; // Code d'erreur
    }

    // Vérifier le symbole et afficher les nombres en conséquence
    if (symbole == '+') {
        for (int i = 0; i <= nombre; i++) {
            printf("%d\n", i);
        }
    } else if (symbole == '-') {
        for (int i = nombre; i >= 0; i--) {
            printf("%d\n", i);
        }
    } else {
        printf("Le symbole n'est pas reconnu.\n");
    }

    return 0; // Code de fin 0
}
