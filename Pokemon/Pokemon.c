#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char namaPokemon[255];
    int power;
} Pokemon;

int main() {
    Pokemon PKMN;
    int retval;

    FILE* myPokemon;
    FILE* SPower;
    FILE* APower;

    myPokemon = fopen("dbPokemon.txt", "r");
    SPower = fopen("SPowerPoke.txt", "w");
    APower = fopen("APowerPoke.txt", "w");

    if (!myPokemon) {
        printf("File tidak ditemukan!");
    } else {
        fprintf(SPower, "Pokemon dengan Power S\n");
        fprintf(APower, "Pokemon dengan Power A\n");
        retval = fscanf(myPokemon, "%s %d", PKMN.namaPokemon, &PKMN.power);
        while (retval != EOF) {
            if (PKMN.power >= 800) {
                fprintf(SPower, "%s %d\n", PKMN.namaPokemon, PKMN.power);
            } else {
                fprintf(APower, "%s %d\n", PKMN.namaPokemon, PKMN.power);
            }
            retval = fscanf(myPokemon, "%s %d", PKMN.namaPokemon, &PKMN.power);
        }
        printf("Pokemon berhasil dikelompokkan\n");
        fclose(myPokemon);
        fclose(SPower);
        fclose(APower);
    }

    return 0;
}
