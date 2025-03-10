#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gamelib.h"

void verifica_errori() {
    //verifica se i puntatori sono inizializzati correttamente
    if (pFirst == NULL) {
        printf("DEBUG: Mappa non impostata correttamente\n");
        return;
    }

    if (n_giocatori <= 0) {
        printf("DEBUG: Giocatori non impostati\n");
        return;
    }
    printf("Mappa e giocatori controllati\n");
}


int main() {
int choice;

do {
    //Stampa menu
    printf("\n~~~Prince Of Inertia\n");
    printf("1) Imposta gioco\n");
    printf("2) Gioca\n");
    printf("3) Termina gioco\n");
    printf("4) Crediti\n");
    printf("Cosa si desidera fare?\n");

    //Lettura scelta
    if (scanf("%d", &choice) != 1) {
        printf("Errore, scelta non valida!\n");
        while (getchar() != '\n');
        continue; 
    }

    //Scelta da eseguire
    switch(choice) {
        case 1:
            imposta_gioco();
            break;

        case 2:
        verifica_errori();
            gioca();
            break;

        case 3:
            termina_gioco();
            break;

        case 4:
            crediti();
            break;

        default:
            printf("Errore, Scelta non valida!\n");
    }
}while (choice !=3);

return 0;
}