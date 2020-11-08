#include<stdio.h>

int main() {
// ejercicio 7 numero de viajes y promedio
    int n;
    int v[30];
    float per[30],pes[30],s, Totalpes, Promper, Prompes, Tper;
    int i;
	printf("Dame el numero de viajes realizados: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Viaje %d:\n ",(i+1));
        printf("Dame la cantidad de personas del viaje : ");
        scanf("%f",&per[i]);
        printf("Dame el peso del viaje : ");
        scanf("%f",&pes[i]);
//Sumatorias  y promedios
	    Tper+=per[i];
	    Totalpes+=pes[i];
	    Promper= Tper/n;
	    Prompes= Totalpes/n;
    }

    printf("%s","_");
    printf("Estadistica del dia");
    printf("%s","_");

    printf("\nCantidad de viajes:%d",i);
    printf("\nCantidad de personas transportadas:%.2f",Tper);
    printf("\nPeso transportado:%.2f",Totalpes);
    printf("\nPromedio de personas or viaje:%.2f",Promper);
    printf("\nPromedio de peso por viaje:%.2f", Prompes);

return 0;
 }
