 #include<stdio.h>

int main(){
 //Primer ejercicio saca el costo de producción

 int n;
 char nombresA[50][30];
 float cp[50],fc[50],cf[50],costop[50],suma,o;
 float Tc;
 char resp;
 int i, j;

 i=0;
 do{
        printf("Dame nombre del articulo %d:",(i+1));
        fflush(stdin);
        gets(nombresA[i]);
        printf("Ingresa la cantidad de unidades producidas:");
        scanf("%f",&cp[i]);
        printf("Ingresa el factor de costo de los materiales:");
        scanf("%f",&fc[i]);
        printf("Ingresa el costo fijo:");
        scanf("%f",&cf[i]);
        costop[i]= cp[i]*fc[i]+cf[i];
        suma+=costop[i];
        printf("Quieres otro articulo?");
        fflush(stdin);
        scanf("%c",&resp);
    i++;
 }while(resp=='s');

    o=i;
        for(j=1;j<=110;j++){
            printf("%s","_");
 }
     printf("\n");
     printf("%-20s %-25s %-18s %-18s %-18s\n","Articulo","Unidades Producidas","Factor costo","Costo fijo","Costo de produccion");
    for(j=1;j<=110;j++){
        printf("%s","_");
 }
        printf("\n");
    for(j=0;j<i;j++){
        printf("%-20s %-25.2f %-18.2f %-18.2f %-18.2f\n",nombresA[j],cp[j],fc[j],cf[j],costop[j]);
}


    for(j=1;j<=110;j++){
        printf("%s","_");
 }
     printf("\n");
     printf("Total %d articulo             %65.2f  ",i,suma);
    return 0;
}
