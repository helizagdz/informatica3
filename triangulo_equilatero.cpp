#include <iostream>
using namespace std;

/*
Descripcion: Determina si es un triagulo equilatero
Autor: Helen Gtz
*/

int main(void) {
     int num1,num2,num3;
  	printf("Dar el primer lado: ");
	scanf("%d",&num1);
	printf("Dar el segundo lado: ");
	scanf("%d",&num2);
    printf("Dar el tercer lado: ");
	scanf("%d",&num3);

    if((num1==num2) && (num2==num3)){
        printf ("Es un triangulo equilatero") ;
    }
    else {
       printf ("No es un triangulo equilatero") ;
    }

    printf ("\n");
}