#include<stdio.h>

int main()
{
//tablas de multiplicar

    int n,c,r,re;
    int buenas=0,malas=0;
    printf("¿Que tabla de multiplicar quieres practicar hoy?: ");
    scanf("%d",&n);

    for(c=1;c<=10;c++)
    {
        r = n * c;
        printf("Cuanto es: %d * %d = ",n,c);
        scanf("%d",&re);

        if(re == r)
        {
            printf("CORRECTO! :)\n");
            buenas = buenas + 1;
        }
        else
        {
            printf("No, estas mal :( la respuesta correcta es: %d\n",r);
            malas = malas +1;
        }
    }

    printf("Total de buenas: %d \n Total de malas: %d",buenas,malas);

    return 0;

}
