#include <stdio.h>

int main()
{
    char nombre[30][30], sexo[30], rs;
    int edad[30], CO[30], CC[30];
    float peso[30], estatura[30];
    int i=0;
    int j,k;
    rs='s';
    while (rs=='s')
    {
        printf("Ingrese el nombre:");
        scanf("%s",&nombre[i]);
        printf("\nIngrese sexo M=mujer H=hombre:");
        scanf("%s",&sexo[i]);
        printf("\nIngrese edad:");
        scanf("%i", &edad[i]);
        printf("\nIngresa estatura en base 100:");
        scanf("%f",&estatura[i] );
        printf("\nIngresa peso:");
        scanf("%f",&peso[i]);
        printf("\nIngresa color de ojo 1=azul 2=castaño 3=otro:");
        scanf("%i",&CO[i]);
        printf("\nIngresa color de pelo 1=castaño 2=rubio 3=otro:");
        scanf("%i",&CC[i]);
        printf("\nQuieres otro alumno?");
        scanf("%s",&rs);
    i++;
    }
    printf("Lista de mujeres con pelo color rubio, ojos azules,una estatura de entre 1.65 y 1.75 y un peso de menos de 55\n");
    for (j=0;j<=i;j++)
    {
        if (sexo[j]=='M')
        {
         if(CC[j]==2)
            {
                if(CO[j]==1)
                {
                    if(estatura[j]>=165 && estatura[j]<=175)
                    {
                        if(peso[j]<=55)
                        printf ("%d. %s\n",j,nombre[j]);
                    }
                }
            }
        }
    }
    printf("Lista de hombre con ojos castaños,una estatura de más de 1.70 y un peso de entre 60 y 70\n");
    for (k=0;k<=i;k++)
    {
        if (sexo[k]=='H')
        {
            if(CO[k]==2)
                {
                    if(estatura[k]> 170)
                    {
                        if(peso[k]>=60 && peso[k]<=70)
                        printf ("%d. %s\n",k,nombre[k]);
                    }
                }
            }
        }

    return 0;
}
