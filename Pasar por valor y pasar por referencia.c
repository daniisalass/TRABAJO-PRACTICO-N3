#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 50
struct DatosDePersona{
	char Nombre[MAX];
	char Apellido[MAX];
	int Edad;
	float Altura;
}Persona[2];
void PasarPorReferencia(struct DatosDePersona *Per);
void MostrarPorReferencia(struct DatosDePersona *MostrarPer);
void PasoPorValor(struct DatosDePersona persona[]);
int main(int argc, char *argv[]) {
	int selecionador;
	int salir=0;
	while (salir!=1)
	{
	puts("Ingrese lo que desea hacer\n 1-Pasar por Referencia y Mostarlo \n 2-Pasar por Valor y Mostrarlo\n 3-Para Salir \n ");
	scanf("%d",&selecionador);
	switch(selecionador)
	{
		case 1:
			PasarPorReferencia(Persona);
			MostrarPorReferencia(Persona);
			
			
		break;
		case 2:
			PasoPorValor(Persona);
			MostrarPorReferencia(Persona);
			break;
		case 3: 
			salir=1;
		default: 
			break;
	}
	}
	return 0;
}
void PasarPorReferencia(struct DatosDePersona *Per)
{
	
			strcpy(Per->Nombre,"Daniel");
			strcpy(Per->Apellido,"Salas");
			Per->Edad=24;
			Per->Altura=1.73;
			Per++;
		
			strcpy(Per->Nombre,"Myrna");
			strcpy(Per->Apellido,"Gonzales");
			Per->Edad=17;
			Per->Altura=1.60;
			Per++;
			
			strcpy(Per->Nombre,"Agus");
			strcpy(Per->Apellido,"Jofre");
			Per->Edad=19;
			Per->Altura=1.70;
}
void MostrarPorReferencia(struct DatosDePersona *MostrarPer)
{
	int i;
	for(i=0;i<3;i++){
	printf("\nPersona%d\n	El Nombre es: %s \n",i,MostrarPer->Nombre);
	printf("	El Apellido es: %s \n",(*MostrarPer).Apellido);
	printf("	La Edad es: %d \n",MostrarPer->Edad);
	printf("	La Altura es: %.2f \n\n",MostrarPer->Altura);
	MostrarPer++;
	}
}
void PasoPorValor(struct DatosDePersona persona[])
{
	strcpy(persona[0].Nombre,"Victor");
	strcpy(persona[0].Apellido,"Salas");
	persona[0].Edad=24;
	persona[0].Altura=1.73;
	
	strcpy(persona[1].Nombre,"Gabriel");
	strcpy(persona[1].Apellido,"Ochoa");
	persona[1].Edad=18;
	persona[1].Altura=1.80;


	strcpy(persona[2].Nombre,"Franchesca");
	strcpy(persona[2].Apellido,"Jofre");
	persona[2].Edad=9;
	persona[2].Altura=1.20;
}

