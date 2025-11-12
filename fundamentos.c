#include <stdio.h>

int main(void){
    short edad = 15;
    int a = 10;
    int b = 15;
    char caracter = 'a';
    char saludo[] = "Hola desde C";
    printf("Variable saludo : %s", saludo);
    printf("Variable a = %d, varable b = %d", a, b);

    printf("eL TAMAÑO short: %ld \n", sizeof(short) );
    printf("eL TAMAÑO DE int: %ld \n", sizeof(int));
    printf("eL TAMAÑO long: %ld \n", sizeof(long) );
    printf("eL TAMAÑO float: %ld \n", sizeof(float) );
    printf("eL TAMAÑO char: %ld \n", sizeof(char));
    printf("eL TAMAÑO saludo: %ld \n", sizeof(saludo) );
    //int c = 0b101110;
    int c = 0x2E;
    printf("el valor de c es %i \n", c);
    short num1 = 34;
    short num2 = 35;
    short num3 = 86;
    short num4 = 92;
    
    if (num1 != num2){
        printf("num1 != num2 \n");
    }
    else{
        printf("num1 == num2");
    }
    int contador = 0;

    while (contador < 20){

        printf("El valor de contador es %d \n", contador);
        contador ++;

    }
    printf("salida del bucle \n");

    for (int numeroImprimir = 0; numeroImprimir <= 20; numeroImprimir ++){
        printf("El valor de num es: %d \n", numeroImprimir);
    }
    printf("salió del bucle for \n");

    do{
        printf("el valor de contador es: %d", contador);
        contador ++; 
    }while (contador < 1);
    printf("Se salió del bucle do while \n");

    printf("Es una nueva linea \n");

    printf("nuevo \n");

    printf("nueva línea desde laptop \n");
}