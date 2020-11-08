#include<stdio.h>

int main(){
 //Saca utilidad 120, impuestoo y precio final de venta

 int n;
 char A[50][30];
 float cp[50],u[50],imp[50],pv[50];
 float Tu=0, Ti=0, TPv=0, sCP;
 char resp;
 int i,j;
 i=0;
 do{
        printf("Dame nombre del articulo %d:",(i+1));
        fflush(stdin);
        gets(A[i]);
        printf("Ingresa el costo de produccion:");
        scanf("%f",&cp[i]);
        //Calculos
        u[i]=cp[i]*1.2;
        imp[i]=(cp[i]+u[i])*.15;
        pv[i]=(cp[i]+u[i]+imp[i]);
        printf("Quieres otro articulo?");
        fflush(stdin);
        scanf("%c",&resp);
        sCP+=cp[i]; // Suma Cp cuando se usa de esta manera se pone antes del i++
        i++;
        //Suma de las variables otra manera.

        TPv=pv[j]; //Suma total pv
            for(j=0;j<=i;j++)
            {
        TPv=TPv+pv[j];
            }
        Tu=u[j];// Suma utilidad
            for(j=0;j<=i;j++)
            {
        Tu=Tu+u[j];
            }
        Ti=imp[j]; //Suma imp
            for(j=0;j<=i;j++)
            {
        Ti=Ti+imp[j];
            }

    }while(resp=='s');

    for(j=1;j<=110;j++)
    {
        printf("%s","_");
    }
    printf("\n");
        printf("%-20s %-25s %-18s %-18s %-18s\n","Articulo","Costo de produccion","Utilidad (120%)","Impuesto (15%)","Precio de venta");

    for(j=1;j<=110;j++)
    {
        printf("%s","_");
    }
    printf("\n");
    for(int j=0;j<i;j++)
    {
        printf("%-20s %-25.2f %-18.2f %-18.2f %-18.2f\n",A[j],cp[j],u[j],imp[j],pv[j]);
    }

for(j=1;j<=110;j++)
    {
        printf("%s","_");
    }
    printf("\n");
        printf("Total %d articulos    %.2f                %.2f               %.2f              %.2f",i,sCP,Tu,Ti ,TPv);
return 0;
}
