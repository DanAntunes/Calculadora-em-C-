#include <stdio.h>
int main(void){
	float x=0, y=0, resultado=0;
	int op;
	do{
		printf("\n\t1 - Soma\n\t2 - Subtracao\n\t3 - Multiplicacao\n\t4 - Divisao");
		scanf("%i", &op);
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &x);
		printf("\nDigite o segundo numero: ");
		scanf("%f",&y);
		switch(op){
			case 1:
				resultado = x+y;
				break;
            case 2:
			    resultado = x-y;
			    break;
			case 3:
			    resultado = x*y;
				break;
			case 4: 
			    resultado = x/y;
				break;
			default:		    
				printf("\n Escolha uma opcao entre Soma Subtracao Multiplicacao Divisao\n");
				break;		
		}
		printf("\n\t O resultado e: %0.2f", resultado);
		printf(" Digite 1 para continuar: ");
		scanf("%i", &op);
	 }while(op==1);
}
