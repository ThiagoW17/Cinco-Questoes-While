#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int soma   = 0,
		num1   = 0,
		num2   = 0;
		
	char continuar;
		
	setlocale(LC_ALL,"");
	
	continuar = 'S';
	
	while(continuar == 'S' || continuar == 's')
	{
		system("cls");

		printf("Digite o primeiro n�mero: ");
		scanf("%d",&num1);
		printf("\n\n");
		
		printf("Digite o segundo n�mero: ");
		scanf("%d",&num2);
		printf("\n\n");
		
		soma = ((num2-num1+1)*(num1+num2))/2;
		
		printf("O resultado dos n�meros � = %d",soma);		

		
		printf("Quer verificar outro n�mero? [S/N]");
		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}
