//Act-Log In 
//Juan Fernando Aispuro

#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
#include <stdlib.h>

int main() 
{
    bool Bandera = false;
    int cont = 0;

    std::string nombre = "Juanfer";
    std::string n_ingresado = "";
    std::string contra = "HolaMundo";
    std::string c_ingresada = "";

    std::cout << "Hola usuario ingresa tu password: " << std::endl;
    std::getline(std::cin, n_ingresado);

    std::cout << "Hola usuario ingresa tu password: " << std::endl;
    std::getline(std::cin, c_ingresada);

    if (nombre == n_ingresado) 
    {
        std::cout << "Nombre ingresado correcto" << std::endl;
        cont = cont + 1;
    }
    if (contra == c_ingresada) 
    {
        std::cout << "Password ingresada correcta" << std::endl;
        cont = cont + 1;
    }
    if (cont < 2) 
    {
        std::cout << "Datos ingresados incorrectos" << std::endl;
    }
    if (cont == 2) 
    {
        Bandera = true;
    }
    std::cout << "El estado del sistema es " << Bandera;

    system("pause");
    return 0;
}
