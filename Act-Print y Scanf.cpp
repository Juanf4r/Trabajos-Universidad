// Entrada y Salida de datos PrintScan

#include <stdio.h>
#include <iostream>
#include <string>

int main() 
{
    int num;
    std::string nombre;
    float peso;
    char genero;
    float altura;

    //formulario de registro, se ingresan los datos y se imprimen en una confirmacion

    printf("\tREGISTRO CIVIL\n");
    printf("Ingresar los siguientes datos para su registro:\n");

    std::cout << "Introduce tu nombre completo: ";
    std::getline(std::cin, nombre);

    //scanf("%s", &nombre);

    printf("Introduce tu genero, H para hombre M para mujer: ");
    scanf_s("%c", &genero);

    printf("Introduce tu edad: ");
    scanf_s("%i", &num);

    printf("Introduce tu peso en Kg: ");
    scanf_s("%f", &peso);

    printf("Introduce altura en Metros: ");
    scanf_s("%f", &altura);

    //confirmacion

    std::cout << "\nBienvenido: " << nombre << std::endl;
    printf("Genero: %c\n", genero);
    printf("Edad: %i\n", num);
    printf("Peso: %f\n", peso);
    printf("Altura:%f\n", altura);

    printf("Presiona Enter pasa Salir");
}
