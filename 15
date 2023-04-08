#include <stdio.h>

int main()

{
	float base, ali, parcela, resultado;

	
	base = 0;
	ali = 0;
	parcela = 0;
	
	printf("digite a base de cálculo mensal: \n");	
	scanf("%f", &base);
	
	if ((base <= 1637.11) && (base >= 0))
	{
		ali = 0;
	
		printf("SEM IMPOSTOS.");
	}
	
	if ( (base >= 1637.11) && (base <= 2453.50) )
	{
		ali = 7.5;
		parcela = 122.78;
		
		resultado = ((base * ali / 100) - parcela);
		
		printf("O imposto devido é de  R$ %.2f", resultado);
		
	}
	
	if ( (base >= 2453.51) && (base <= 3271.38) )
	{
		ali = 15;
		parcela = 306.80;
		
		resultado = ((base * ali / 100) - parcela);
		
		printf("O imposto devido é de  R$ %.2f", resultado);
		
	}

	if ( (base >= 3271.39) && (base <= 4087.65) )
	{
		ali =22.5;
		parcela = 552.15;
		
		resultado = ((base * ali / 100) - parcela);
		
		printf("O imposto devido é de  R$ %.2f", resultado);
		
	}
	
	if (base > 4087.65)
	{
		ali =27.5;
		parcela = 756.53;
		
		resultado = ((base * ali / 100) - parcela);
		
		printf("O imposto devido é de  R$ %.2f", resultado);
		
	}
	
}
