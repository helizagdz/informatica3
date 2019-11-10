#include <iostream>
using namespace std;
int main(void){
     int num1;
  	printf("Escribe un número: ");
	scanf("%d",&num1);

    if(num1<0)
    {
        printf ("El numero es negativo");
    }
    else
    {
        if (num1==0)
        {
            printf ("El numero es neutro");
        }
        else
        {
            printf (" El numero es positivo");
        }
    }
    printf ("\n");
}