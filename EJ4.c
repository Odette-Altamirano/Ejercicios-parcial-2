
#include<stdio.h>

int main(){
 //Tercer ejercicio saca el costo de varios articulos

     int n;
     char Art[50][30], nombre [50][30];
     float cant[50],pu[50],total[50],suma, To, imp;
     char resp, rs;
     int i;
     rs = 's';
while(rs=='s')
{
    suma=0;
     i=0;

    printf ("Dame nombre del cliente:");
	scanf("%s",nombre);
    resp = 's';


 while (resp=='s')
    {
	    printf("Dame nombre del articulo %d:",(i+1));
	    fflush(stdin);
	    gets(Art[i]);
	    printf("Ingresa la cantidad de unidades compradas: ");
	    scanf("%f",&cant[i]);
	    printf("Ingresa el factor de costo unitario: ");
	    scanf("%f",&pu[i]);
	    total[i]= cant[i]*pu[i];
	    suma+=total[i];
	    printf("Quieres otro articulo? : ");
	    fflush(stdin);
	    scanf("%s",&resp);
	    i++;
 	}

  printf("Deseas generar otra factura? : ");
  scanf("%s",&rs);
  imp=suma*.15;
  To=suma+imp;

    printf ("Nombre: %s\n", nombre);
        for(int j=1;j<=110;j++)
        {
            printf("%s","_");
        }
    printf("\n");
     printf("%-20s %-20s %-15s %-15s\n","Articulo","Cantidad","Precio unitario","Total");
    for(int j=1;j<=110;j++)
    {
        printf("%s","_");
    }
        printf("\n");
    for(int j=0;j<i;j++)
    {
        printf("%-20s %-20.2f %-15.2f %-15.2f\n",Art[j],cant[j],pu[j],total[j]);
    }
    for(int j=1;j<=110;j++)
    {
        printf("%s","_");
    }
     printf("%-65s  %-35.2f\n","\nSubtotal",suma);
     printf("%-65s  %-35.2f\n","Impuesto 15%",imp);
     printf("%-65s  %-35.2f\n","Total",To);

}
  return 0;
}


