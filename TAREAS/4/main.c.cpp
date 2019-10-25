#include <stdio.h>
#include <stdlib.h>

int main()
{


	float sum=0,prom=0,num;
	int contador;
	int ban=1;
	while(ban!=0)
	{
	prom++;
	printf("Ingresa un numero :\n");
	scanf("%f",&num);
	sum+=num;
	printf("deseas salir ? si=0 no=1");
	scanf("%d",&ban);

	}
	printf("El promedio de los numero es %.2f",sum/prom);

}
