#include <iostream>
using namespace std;

/*
Descripcion: Determina el mayor de dos numeros
Autor: Helen Gtz
*/

int main(void)
{
    int num1, num2;
    printf("Dar el primner número: ");
    scanf("%d", &num1);
    printf("Dar el segundo número: ");
    scanf("%d", &num2);
    if (num2 < num1)
        printf("El numero mayor es: %d", num1);
    else
        printf("El numero mayor es: %d", num2);
}