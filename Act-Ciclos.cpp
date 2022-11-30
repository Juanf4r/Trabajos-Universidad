// 10_10_2022_Ciclos.cpp
//Juan Fernando Aispuro
//Ciclos While Do,While y For

#include <iostream>
#include<chrono>
#include<windows.h>

int main()
{
    bool seguir = true;
    int contador = 0;

    //lo peor que pueden usar es el while porque se cometen muchos errores
    while (seguir) 
    {
        std::cout << "# " << contador << std::endl;

        contador = contador + 1;
        Sleep(1000);

        if (contador == 100)
        {
            seguir = false;
        }
    }

}