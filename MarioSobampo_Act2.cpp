/******************************************************************************

Programa para el uso de los operadores Aritmeticos... con tipo flotante ulala
Mario Sobampo Mk2

*******************************************************************************/
#include <iostream>
#include <stdio.h>
int main()
{
    float a,b;
    
    std :: cout << "Por favor ingrese el primer numero: "<< std::endl;
    std :: cin >> a;
    std :: cout << "El segundo numero de favor tambien: "<< std::endl;
    std :: cin >> b;
    
    float sum = a + b;
    float res = a-b;
    float divi = a/b;
    float mul = a*b;
    
    std :: cout << "La suma de los numeros es: " << sum << std :: endl;
    std :: cout << "La resta de los numeros es: " << res << std :: endl;
    std :: cout << "La divicion de los numeros es: " << divi << std :: endl;
    std :: cout << "La multiplicacion de los numeros es: " << mul << std :: endl;
    return 0;
}