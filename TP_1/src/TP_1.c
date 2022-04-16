/*
 ============================================================================
 Name        : TP_1.c
 Author      : Agustin Berasain Ruffo
 Division	 : 1°H
 ============================================================================
 */

#include <stdlib.h>
#include "biblioteca.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	int kilometrosIngresados;
	int flagOpcion1;
	int flagOpcion2;
	int flagOpcion3;
	float precioAerolineas;
	float precioLatam;
	float debitoAerolineas;
	float debitoLatam;
	float creditoAerolineas;
	float creditoLatam;
	float btcAerolineas;
	float btcLatam;
	float unitarioAerolineas;
	float unitarioLatam;
	float diferenciaDePrecio;

	kilometrosIngresados = -1;
	precioAerolineas = -1;
	precioLatam = -1;
	flagOpcion1 = 0;
	flagOpcion2 = 0;
	flagOpcion3 = 0;


	do{
		printf("\n\nAIRFARE CALCULATOR\n\n");
		if(kilometrosIngresados == -1)
		{
			printf("1. Ingresar kilometros.\n\n");
		}
		else
			{
				printf("1. Ingresar kilometros: (km = %d)\n\n",kilometrosIngresados);
			}
		if(precioAerolineas == -1 && precioLatam == -1)
		{
			printf("2. Ingresar precio de vuelos.\n\n");
		}
		else
			{
				printf("2. Ingresar precio de vuelos: (Aerolineas = $%.2f , Latam = $%.2f)\n\n",precioAerolineas,precioLatam);
			}
		printf("3. Calcular todos los costos.\n\n");
		printf("4. Informar resultados.\n\n");
		printf("5. Carga forzada de datos.\n\n");
		printf("6. Salir.\n");

		opcion = GetInt("\nIngrese una opcion [1-6]: ",1, 6,"\nERROR! Ingrese una opcion valida [1-6]:");
		switch(opcion)
		{
			case 1:
				kilometrosIngresados = GetInt("\nIngrese la cantidad de kilometros: " , 0 , 23000, "\nERROR! Ingrese un valor valido: ");
				flagOpcion1 = 1;
				system("pause");
					break;

			case 2:
				if(flagOpcion1 == 1)
				{
					precioAerolineas =  GetFloat("\nIngrese el costo del vuelo de Aerolineas ($): ", 1, 2000000, "\nERROR! Ingrese un valor valido: ");
					precioLatam = GetFloat("\nIngrese el costo del vuelo de Latam ($): ", 1, 2000000, "\nERROR! Ingrese un valor valido: ");
					flagOpcion2 = 1;
				}
				else
					{
						printf("\nERROR!! Antes de ingresar el costo de los vuelos debe ingresar la cantidad de kilometros.\n\n");
					}
				system("pause");
					break;

			case 3:
				if(flagOpcion2 == 1)
				{
					debitoAerolineas = CalcularDescuento(precioAerolineas, 10);
					debitoLatam = CalcularDescuento(precioLatam, 10);
					creditoAerolineas = CalcularInteres(precioAerolineas, 25);
					creditoLatam = CalcularInteres(precioLatam, 25);
					btcAerolineas = CalcularEnBitcoin(precioAerolineas);
					btcLatam = CalcularEnBitcoin(precioLatam);
					unitarioAerolineas = CalcularValorUnitario(precioAerolineas, kilometrosIngresados);
					unitarioLatam = CalcularValorUnitario(precioLatam, kilometrosIngresados);
					diferenciaDePrecio = CalcularDiferencia(precioAerolineas, precioLatam);
					flagOpcion3 = 1;

					printf("\n\nLos calculos fueron realizados con exito.\n\n");

				}
				else
					{
						printf("\nERROR!! Para poder calcular los costos debe ingresar primero los kilometros y el precio de los vuelos.\n\n");
					}
				system("pause");
				break;

			case 4:
				if(flagOpcion3 == 1)
				{
					MostrarResultados(kilometrosIngresados, precioAerolineas, debitoAerolineas, creditoAerolineas, btcAerolineas, unitarioAerolineas, precioLatam, debitoLatam, creditoLatam, btcLatam, unitarioLatam, diferenciaDePrecio);
					kilometrosIngresados = -1;
					precioAerolineas = -1;
					precioLatam = -1;
					flagOpcion1 = 0;
					flagOpcion2 = 0;
					flagOpcion3 = 0;
				}
				else
					{
						printf("\nERROR!! Para mostrar los resultados, debe primero calcular los costos.\n\n");
					}

				system("pause");
				break;

			case 5:
				kilometrosIngresados = 7090;
				precioAerolineas = 162956;
				precioLatam = 159339;

				debitoAerolineas = CalcularDescuento(precioAerolineas, 10);
				debitoLatam = CalcularDescuento(precioLatam, 10);
				creditoAerolineas = CalcularInteres(precioAerolineas, 25);
				creditoLatam = CalcularInteres(precioLatam, 25);
				btcAerolineas = CalcularEnBitcoin(precioAerolineas);
				btcLatam = CalcularEnBitcoin(precioLatam);
				unitarioAerolineas = CalcularValorUnitario(precioAerolineas, kilometrosIngresados);
				unitarioLatam = CalcularValorUnitario(precioLatam, kilometrosIngresados);
				diferenciaDePrecio = CalcularDiferencia(precioAerolineas, precioLatam);

				MostrarResultados(kilometrosIngresados, precioAerolineas, debitoAerolineas, creditoAerolineas, btcAerolineas, unitarioAerolineas, precioLatam, debitoLatam, creditoLatam, btcLatam, unitarioLatam, diferenciaDePrecio);
				kilometrosIngresados = -1;
				precioAerolineas = -1;
				precioLatam = -1;

				system("\n\npause");
				break;
		}
	}while(opcion != 6);

	printf("\n\nHasta la próxima..!");

}
