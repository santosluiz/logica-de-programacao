#include <stdio.h>
#include <stdlib.h>

// 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

main(){
	int dias, anos = 0, meses = 0, i;
	
	printf ("Digite a idade em dias:\n");
	scanf ("%d", &dias);
	
	for (i = 1; i <= dias; i++)
	{
		if (dias >= 365)
		{
			anos = anos + 1;
			dias = dias - 365;
		}
		
		if (dias >= 31)
		{
			meses++;
			dias = dias - 31;
			if (meses == 12)
			{
				anos = anos + 1;
				meses = meses - 12;
			}
				
		}
	}
	
	printf ("A pessoa tem: %d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias);	
	
}
