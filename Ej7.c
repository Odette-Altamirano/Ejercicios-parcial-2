#include<stdio.h>

int main() {
    //Ej 7 boeta de estudiantes

    int n;
    printf("Cuantos Alumnos tiene?:");
    scanf("%d",&n);
    char nombres[n][30];
    float c1[n],c2[n],c3[n],prom[n],s,promF;

    s=0;
    for(int i=0;i<n;i++){
         printf("Dame nombre del alumno %d:",(i+1));
         fflush(stdin);
         gets(nombres[i]);
         printf("Dame la calificacion del Parcial 1 en base a 10 de %s:",nombres[i]);
         scanf("%f",&c1[i]);
         printf("Dame la calificacion del Parcial 2 en base a 10 de %s:",nombres[i]);
         scanf("%f",&c2[i]);
         printf("Dame la calificacion del Parcial 3 en base a 10 de %s:",nombres[i]);
         scanf("%f",&c3[i]);
         prom[i]=(c1[i]+c2[i]+c3[i])/3;
         s=s+prom[i];
    }

    promF=s/n;

    for(int i=1;i<=64;i++){
        printf("%s","_");
    }
    printf("\n");
    printf("%-20s %-10s %-10s %-10s %-10s\n","Alumnos","","","C. Final","Resultado");
    for(int i=1;i<=64;i++){
        printf("%s","_");
    }
    printf("\n");
    for(int i=0;i<n;i++)
	{
    	if(prom[i]>=7)
		{
            printf("%-20s %-10s %-10s %-10.2f %-10s\n",nombres[i],"","",prom[i],"AC");

    	}
		else if (prom[i]<7)
		{
        	printf("%-20s %-10s %-10s %-10.2f %-10s\n",nombres[i],"","",prom[i],"NA");
    	}
	}

    for(int i=1;i<=64;i++){
        printf("%s","_");
    }
    printf("\n");
    printf("%-20s %-10s %-10s %-10s %-10.2f\n","Promedio Final","","","",promF);

     printf("\n");
    printf("Total de alumnos %d",n);

    return 0;

}
