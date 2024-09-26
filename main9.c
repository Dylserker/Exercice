#include <stdio.h>
#include <stdlib.h>

int main() {
    char mot[100];

    printf("Veuillez saisir un mot : ");
    scanf("%s", mot);

    for (int i = 0; i < 5; i++) {
        printf("%s\n", mot);
    }

    return 0; // Code de fin 0
}
