#include<stdio.h>

int main(){
//Ejercicio 5 cuenta de banco con if

    int dec,con, op,o,n;
    char nombre[48];
    con = 1;
    dec = 1;
    float saldo, deposito,retiro;


    while (con == 1)
    {

		printf("Dame el nombre del cuentahabiente: ");
		fflush(stdin);
	    gets(nombre);

	    printf("\n Dame el saldo: ");
	    scanf("%f",&saldo);
	    fflush(stdin);


	    while (dec == 1)
    	{

	        printf("Que operacion deseas realizar?  1.- Deposito  2.- Retiro: ");
	        scanf("%d",&op);

	        if(op == 1)
	        {
	            printf("\n Cuanto dinero va a abonar? ");
	            scanf("%f",&deposito);

	            saldo = saldo + deposito;
	            printf("\n Su nuevo saldo es: %.3f \n" ,saldo);

	            printf("\n Desea realizar otra operacion?  1.- Si  0.- No: ");
	       		scanf("%d",&dec);
	       		n++;
	         }
	         if(op == 2)
	         {
	            printf("\n Cuanto dinero va a retirar? ");
	            scanf("%f",&retiro);

	            saldo = saldo - retiro;
	            printf("\n Su nuevo saldo es: %.3f \n" ,saldo);

				printf("\n Desea realizar otra operacion?  1.- Si  0.- No: ");
	       		scanf("%d",&dec);
	       		n++;
	        }

		}
		break;
	}

     printf("\n");
     printf("%s","______________________________________________________________");
	 printf("\n");
	 printf("Cuentahabiente: %s\n",nombre);
	 printf("%s","_______________________________________________________________");
     printf("\n");

     printf("%-20s %-10s %-8s %-8s \n","Movimiento","Deposito","Retiro","Saldo");
     printf("%s","________________________________________________________________");
     printf("\n");
     printf("%-20d %-10.3f %-8.3f %-8.3f\n",n,deposito,retiro,saldo);
      return 0;
}
