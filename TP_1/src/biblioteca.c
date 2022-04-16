/*
 * biblioteca.c
 *
 *  Created on: 14 abr. 2022
 *      Author: agust
 */

#include "biblioteca.h"

int GetInt(char mensaje[],int min, int max,char errorMensaje[])
{
	int numeroIngresado;
	printf(mensaje);
	fflush(stdin);
	scanf("%d", &numeroIngresado);

	while(numeroIngresado<min || numeroIngresado>max || isalpha(numeroIngresado) != 0)
	{
		printf(errorMensaje);
		fflush(stdin);
		scanf("%d", &numeroIngresado);
	}
	return numeroIngresado;
}

float GetFloat(char mensaje[],float min,float max,char errorMensaje[])
{
	float numeroIngresado;
	printf(mensaje);
	fflush(stdin);
	scanf("%f", &numeroIngresado);

	while(numeroIngresado<min || numeroIngresado>max ||isdigit(numeroIngresado) != 0)
	{
		printf(errorMensaje);
		fflush(stdin);
		scanf("%f", &numeroIngresado);
	}
	return numeroIngresado;
}

float CalcularValorUnitario(float precio, int kilometros)
{
	float resultado;

	resultado = (float) precio / kilometros;
	return resultado;
}

float CalcularDescuento(float numero, float porcentaje)
{
	float resultado;

	resultado = (numero * porcentaje) / 100;
	resultado = numero - resultado;
	return resultado;
}

float CalcularInteres(float numero, float porcentaje)
{
	float resultado;

	resultado = (numero * porcentaje) / 100;
	resultado = numero + resultado;
	return resultado;
}

float CalcularEnBitcoin(float numero)
{
	float resultado;
	resultado = numero / BTC;
	return resultado;
}

float CalcularDiferencia(float numero,float numero2)
{
	float resultado;
	resultado = 0;

	if(numero > numero2)
	{
		resultado = numero - numero2;

	}else if (numero2 > numero)
		{
			resultado = numero2 - numero;
		}

	return resultado;
}

void MostrarResultados(int kilometros,float precioAero ,float debitoAero,float creditoAero,float btcAero,float unitarioAero,float precioLatam,float debitoLatam,float creditoLatam,float btcLatam,float unitarioLatam,float diferencia)
{
	printf("\nKMs Ingresados: %d km\n\n",kilometros);

	printf("Precio Aerolineas: $ %.2f\n"
			"a) Precio con tarjeta de debito: $ %.2f\n"
			"b) Precio con tarjeta de credito: $ %.2f\n"
			"c) Precio pagando con bitcoin: %.2f BTC\n"
			"d) Precio unitario: $ %.2f\n\n",precioAero,debitoAero,creditoAero,btcAero,unitarioAero);

	printf("Precio Latam: $ %.2f\n"
			"a) Precio con tarjeta de debito: $ %.2f\n"
			"b) Precio con tarjeta de credito: $ %.2f\n"
			"c) Precio pagando con bitcoin: %.2f BTC\n"
			"d) Precio unitario: $ %.2f\n\n",precioLatam,debitoLatam,creditoLatam,btcLatam,unitarioLatam);

	printf("La diferencia de precio es: $ %.2f\n\n",diferencia);
}


