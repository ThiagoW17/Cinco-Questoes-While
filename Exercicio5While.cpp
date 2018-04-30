#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int len_palavra = 0,
		erro        = 0,
		i = 0;
		
	char continuar,
		 palavra[200];
		
	setlocale(LC_ALL,"");
	
	continuar = 'S';
	
	while(continuar == 'S' || continuar == 's')
	{
		system("cls");
		
		strcpy(palavra,"");

		printf("Digite a palavra: ");
		fgets(palavra,sizeof(palavra),stdin);
		
        len_palavra = strlen(palavra);

        if (palavra[len_palavra - 1] == '\n')
	    {
     		palavra[--len_palavra] = 0;	
    	}	
		
		printf("\n\n");
		
		erro = 0;
		
		for(i=0;i<len_palavra;i++)
		{
			if(palavra[i]<65 || (palavra[i]>90 && palavra[i]<97) || palavra[i] > 122)
			{
				erro = 1;
				i = len_palavra;
			}
		}
		
		if(erro == 1)
		{
			printf("Digite uma palavra valida: ");
		}
		else
		{
			printf("\t\t ");
			for(i=0;i<len_palavra;i++)
			{
				printf("%c ",palavra[i]);	
			}
	
		}

		printf("Quer verificar outra palavra? [S/N]");
		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}
