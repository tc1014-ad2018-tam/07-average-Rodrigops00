//Rodrigo Perez Solis
//A01411278


#include <stdio.h>

int main() {
    //Se declararan las variables
    double average = 0;
    float num;
    float result = -1;

    //se inicia el do
    do{
        printf("introduce a number:");
        scanf("%f", &num);
        average += num;
        result += 1;
        //Cuando introduces un  0 el programa se detiene
    }
    while (num != 0);

    // se calcula el promedio y se le muestra el resultado al usuario.
    average /= result;
    printf("average= %f", average);

    return 0;




    }
