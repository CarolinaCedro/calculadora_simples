	
		#include <stdio.h>
		#include <stdlib.h>
		#include <conio.h>
	
	//Declaração de variaveis
		int n1,n2;
		float Porcentagem,NumPor2,NumPor;
		char op,SairLoop;
		
		int main(){
			
	// Foi criado um sistema basico de calculadora utilizando a estrutura if,do-while e swicth case.
			
		do {
		  system("color 03");	
		  printf("\n  ********** CALCULADORA **********\n\n");
		  printf("Entre com o Primeiro Numero:");
		  scanf("%i",&n1);
		  printf("Entre com o Segundo Numero:");
		  scanf("%i",&n2);
		  printf("Operacoes Disponiveis:\n");
		  printf("(+)\n");
		  printf("(-)\n");
		  printf("(*)\n");
		  printf("(/)\n");
		  printf("(%%)\n");
		  printf("Escolha a Operacao Desejada:\n");
		  scanf("%s",&op);
		  
	// caso o usuario digite a opção (%) os sistema entra em nova fase de execução pedindo que o usuario digite
	// novamente os numero e o valor da porcentagem a ser processada. em conclusão ele retornara o valor da porcentagem
	//mas o valor somado ao valor inicial.	  
		  if (op == '%'){
		  	system("cls");
		  	  printf("\nCalculo da Porcentagem\n");
		  	  printf("\nEntre com o valor:");
		  	  scanf("%f",&NumPor);
		  	  printf("\nQual o valor da porcentagem a ser calculada:");
		  	  scanf("%f",&NumPor2);
		  	  
		  	Porcentagem = (NumPor / NumPor2);
		  	
		  	  printf("\nA porcentagem do numero indicado e: %2.f",Porcentagem);
		  	  printf("\nO valor final e de: %2.f",NumPor + Porcentagem);
		   }
		  	
	//Estrutura switch em execucão.	  
		    switch(op) {
		     case '+' :printf("Resultado: %i ",n1+n2,"\n"); break; 
		   }
		       switch(op) {
		     case '-' :printf("Resultado: %i ",n1-n2,"\n"); break; 
		   }
		       switch(op) {
		     case '*' :printf("Resultado: %i ",n1*n2,"\n"); break; 
		   }
		       switch(op) {
		     case '/' :
		     	
			 if(n2!=0){
			 	printf("Resultado: %i ",n1/n2,"\n");
				  
				 }else{
			 		printf("ERRO: Nao e Possivel Dividir um Numero por Zero,Tente Novamente !!\n");
			 		break;
				 }
			 }
			  
		   
		      
		  printf("\nDeseja Sair? (S/N):");
		  scanf("%s",&SairLoop);
	   system("cls");
		
	 } while (SairLoop == 'N');
		
	  
		//Primeira calculora simples criada em C por Cedro** 
		}
