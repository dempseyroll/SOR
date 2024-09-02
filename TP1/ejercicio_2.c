#include <stdio.h>
#include <limits.h>

int main() {
    // Puntero al archivo
    FILE *fp;
    // Abriendo archivo
    fp = fopen("/tmp/ejercicio_2.log", "wt");

    int a = INT_MAX;
    while(1) {
    printf("Presione una tecla...");
    getchar();
    int i = 0;
    printf("Contando...\n");

    while(i<a) {
        i++;
        // Escribiendo i en fp
        fprintf(fp, "Numero: %d \n",i);
        }
    }
    fclose(fp);
    return 0;
}