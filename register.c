#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Guerrero Cangas Sebastian
/**
 * Programa que ejecuta un ciclo for con un número máximo de iteraciones,
 * El valor maximo se pasa como parametro en la linea de comando.
 * Ejemplo: ./registerEXE 10000000000
 * es decir 1 x 10^10 una seguido de 10 ceros
 * argv[0] es el nombre del programa
 * argv[1] es el numero de iteraciones
 */

int main(int argc, char* argv[]){
    if(argc!=2){

        printf("Forma de uso: %s ValorLong \n", argv[0]);
        return -1;

    }

    long max = atol(argv[1]);//recibe los caracteres y lo convierte en valores

    // Calcula el tiempo de ejecucion
    clock_t t = clock();
    printf("Inicio\n");

    /*si es el caso de register tardara mucho menos en ejecutar que con
	el int de forma normal, por el hecho es que register le pide al 
	copilador guarde las variables en un registro de la cpu en la 
	memoria RAM*/
	
    register int n=0;
 
    //int n=0;
    for(n=0; n<max; n++);

    printf("Fin\n");

    t = clock() - t;

    double tiempo = ((double)t)/CLOCKS_PER_SEC; // calcula el tiempo transcurrido

    printf("El tiempo que transcurrio fue de: %f segundos\n", tiempo);

    return 0;
}
