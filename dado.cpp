#include <iostream>
using namespace std;

/*
Descripcion: Determina el menor de seis numeros
Autor: Helen Gtz
*/

int main(void)
{
    int num1, num2, num3, num4, num5, num6;
    printf("Dar el primner número: ");
    scanf("%d", &num1);
    printf("Dar el segundo número: ");
    scanf("%d", &num2);
    printf("Dar el tercer número: ");
    scanf("%d", &num3);
    printf("Dar el cuarto número: ");
    scanf("%d", &num4);
    printf("Dar el quinto número: ");
    scanf("%d", &num5);
    printf("Dar el sexto número: ");
    scanf("%d", &num6);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 < num5)
                {
                    if (num1 < num6)
                    {
                        printf("El numero menor es: %d", num1);
                    }
                    else
                    {
                        printf("El numero menor es: %d", num6);
                    }
                }
            }
        }
        else if (num4 < num5)
        {
            if (num4 < num6)
            {
                printf("El numero menor es: %d", num4);
            }
            else
            {
                printf("El numero menor es: %d", num6);
            }
        }
    }
    {
        {
            if (num2 > num3)
            {
                if (num2 > num4)
                {
                    if (num2 > num5)
                    {
                        if (num2 > num6)
                        {
                            printf("El numero mayor es: %d", num2);
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("El numero mayor es: %d", num2);
        }
        else
        {
            printf("El numero mayor es: %d", num3);
        }
    }

    printf("\n");
}