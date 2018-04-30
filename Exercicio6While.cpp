#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int len_frase = 0,
		i = 0; 
		
	char continuar,
		 frase[101],
		 frase_upper[101],
		 frase_lower[101];
		
	setlocale(LC_ALL,"");
	
	continuar = 'S';
	
	while(continuar == 'S' || continuar == 's')
	{
		system("cls");
		
		strcpy(frase,"");
		strcpy(frase_upper,"");
		strcpy(frase_lower,"");

		printf("Digite a frase: ");
		fgets(frase,sizeof(frase),stdin);
		
        len_frase = strlen(frase);

        if (frase[len_frase - 1] == '\n')
	    {
     		frase[--len_frase] = 0;	
    	}	
		
		printf("\n\n");
		
		for(i=0;i<=len_frase;i++)
		{
			if((frase[i]>=65 && frase[i]<=90) || (frase[i]>=97 && frase[i] <= 122))
			{
				if(frase[i]>=65 && frase[i]<=90)
				 {
				 	frase_lower[i]=frase[i]+32;
				 	frase_upper[i]=frase[i];
				 }
				 else
				 {
				 	frase_lower[i]=frase[i];
				 	frase_upper[i]=frase[i]-32;
				 }
			}
			else
			{
			 	frase_upper[i]=frase[i];
			 	frase_lower[i]=frase[i];
			}
		}
		
		printf("A frase em maiúscula: %s\n",frase_upper);
		printf("A frase em minúscula: %s\n",frase_lower);
		
		printf("Quer verificar outra frase? [S/N]");
		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}
