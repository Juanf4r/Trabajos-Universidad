
#include<iostream>
#include<math.h>
#include<stdlib.h>

int main() 
{
    int opc;
    float a_mas, b_mas, res_suma;
    float a_resta, b_resta, res_resta;
    float ax, bx, resx;
    float a_entre, b_entre, res_entre;
    float potencia, res_potencia;
    float potencia_1;
    float raiz, res_raiz;

    std::cout << "\tBIENVENIDO A SU CALCULADORA" << std::endl;
    std::cout << "1.-Sumas " << std::endl;
    std::cout << "2.-Restas " << std::endl;
    std::cout << "3.-Multiplicaciones " << std::endl;
    std::cout << "4.-Divisiones " << std::endl;
    std::cout << "5.-Potencia " << std::endl;
    std::cout << "6.-Raices" << std::endl;
    std::cout << "7.-Salir" << std::endl;
    std::cout << "\nEliga una opcion para ejecutar: "; std::cin >> opc; std::cout << std::endl;

    switch (opc) 
    {
        case 1:
        std::cout << "Digite un numero que sumar: "; std::cin >> a_mas;
        std::cout << "Digite otro numero que sumar: "; std::cin >> b_mas;
        res_suma = (a_mas + b_mas);
        std::cout << "\nTu resultado es: " << res_suma << std::endl; break;

        case 2:
        std::cout << "Digite un numero que restar: "; std::cin >> a_resta;
        std::cout << "Digite otro numero que restar: "; std::cin >> b_resta;
        res_resta = (a_resta - b_resta);
        std::cout << "Tu resultado es: " << res_resta << std::endl; break;

        case 3:
        std::cout << "Digite un numero que multiplicar: "; std::cin >> ax;
        std::cout << "Digite otro numero que multiplicar: "; std::cin >> bx;
        resx = (ax * bx);
        std::cout << "Tu resultado es: " << resx << std::endl; break;

        case 4:
        std::cout << "Digite un numero que dividir: "; std::cin >> a_entre;
        std::cout << "Digite otro numero que dividir: "; std::cin >> b_entre;
        res_entre = (a_entre / b_entre);
        std::cout << "Tu resultado es: " << res_entre << std::endl; break;

        case 5:
        std::cout << "Digite un numero que potenciar: "; std::cin >> potencia;
        std::cout << "Digite la potencia: "; std::cin >> potencia_1;
        res_potencia = (pow(potencia, potencia_1));
        std::cout << "Tu resultado es: " << res_potencia << std::endl; break;

        case 6:
        std::cout << "Digite un numeros sacar raiz: "; std::cin >> raiz;
        res_raiz = (sqrt(raiz));
        std::cout << "Tu resultado es: " << res_raiz << std::endl; break;

        case 7: break;

        default: std::cout << "NO ELIGIO NINGUNA OPCION" << std::endl;
    }

    system("pause");
    return 0;

}