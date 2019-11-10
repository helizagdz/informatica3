#include <iostream>
using namespace std;
int main(void) {
     int num1,num2,num3;
  	printf("Dar el primner número: ");
	scanf("%d",&num1);
	printf("Dar el segundo número: ");
	scanf("%d",&num2);
    printf("Dar el tercer número: ");
	scanf("%d",&num3);

    if(num1>num2){
        if (num1>num3)
        {
            printf("El numero mayor es: %d",num1);
        }
        else
        {
            printf("El numero mayor es: %d",num3);
        }
    }
    else {
        if (num2>num3)
        {
            printf ("El numero mayor es: %d",num2);
        }
        else
        {
           printf ("El numero mayor es: %d",num3);
        }
    }

    printf ("\n");
}