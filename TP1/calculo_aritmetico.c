#include <stdio.h>  //incluimos la libreria de estandar input/output
#include <unistd.h> //para hacer sleep
#include <time.h>   //para inicializar el tiempo
#include <pthread.h>

void *calculo_aritmetico(){ 
    int contador = 0;
    while(contador < 2147483647){
            contador=contador+1;
        }
    //printf("Soy un hilo\n");
    pthread_exit(NULL);
}

int main() {
    clock_t inicio, fin;
    pthread_t thread_1, thread_2, thread_3, thread_4, thread_5;
    inicio = clock(); // Tiempo de inicio
    pthread_create(&thread_1, NULL, calculo_aritmetico, NULL);
    pthread_create(&thread_2, NULL, calculo_aritmetico, NULL);
    pthread_create(&thread_3, NULL, calculo_aritmetico, NULL);
    pthread_create(&thread_4, NULL, calculo_aritmetico, NULL);
    pthread_create(&thread_5, NULL, calculo_aritmetico, NULL);
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);
    pthread_join(thread_4, NULL);
    pthread_join(thread_5, NULL);
    //calculo_aritmetico();
    //calculo_aritmetico();
    //calculo_aritmetico();
    //calculo_aritmetico();
    //calculo_aritmetico();
    fin = clock(); // Tiempo de fin
    double delta = (fin - inicio) / CLOCKS_PER_SEC; // Duración del programa.
    printf("El tiempo de ejecución fue: %f\n", delta);
    return 0;
}