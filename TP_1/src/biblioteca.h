/*
 * biblioteca.h
 *
 *  Created on: 14 abr. 2022
 *      Author: agust
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define BTC 4606954.55

/**
 * @brief Solicita un numero entero al usuario y lo válida.
 *
 * @param mensaje Mensaje que se le muestra al usuario a la hora de pedir el dato.
 * @param min Valor minimo del numero que debe ingresar el usuario.
 * @param max Valor máximo del numero que debe ingresar el usuario.
 * @param errorMensaje Mensaje que se le muestra al usuario en caso de ingresar un dato inválido.
 * @return Un numero entero ingresado por el usuario habiendo sido válidado.
 */
int GetInt(char mensaje[],int min, int max,char errorMensaje[]);

/**
 * @brief Solicita un numero flotante al usuario y lo válida.
 *
 * @param mensaje Mensaje que se le muestra al usuario a la hora de pedir el dato.
 * @param min Valor minimo del numero que debe ingresar el usuario.
 * @param max Valor máximo del numero que debe ingresar el usuario.
 * @param errorMensaje Mensaje que se le muestra al usuario en caso de ingresar un dato inválido.
 * @return Un numero flotante ingresado por el usuario habiendo sido válidado.
 */
float GetFloat(char mensaje[],float min,float max,char errorMensaje[]);

/**
 * @brief Calcula el porcentaje de un numero y se lo resta al mismo.
 *
 * @param numero El valor original al cual queremos restarle un porcentaje.
 * @param porcentaje El valor del porcentaje a calcular.
 * @return El numero original con la resta del porcentaje indicado.
 */
float CalcularDescuento(float numero, float porcentaje);

/**
 * @brief Calcula el porcentaje de un numero y se lo suma al mismo.
 *
 * @param numero El valor original al cual queremos sumarle un porcentaje.
 * @param porcentaje El valor del porcentaje a calcular.
 * @return El numero original con la suma del porcentaje indicado.
 */
float CalcularInteres(float numero, float porcentaje);

/**
 * @brief Transforma el valor de un numero a bitcoin.
 *
 * @param numero El valor a transformar.
 * @return El valor original transformado a bitcoin.
 */
float CalcularEnBitcoin(float numero);

/**
 * @brief  Calcula el precio por kilometro de recorrido.
 *
 * @param precio Valor del viaje.
 * @param kilometros Distancia del viaje.
 * @return El valor de cada kilometro.
 */
float CalcularValorUnitario(float precio, int kilometros);

/**
 * @brief Determina cual numero es mayor y le resta el numero menor.
 *
 * @param numero El valor de un viaje.
 * @param numero2 El valor de otro viaje.
 * @return La diferencia entre el valor de un viaje y otro.
 */
float CalcularDiferencia(float numero,float numero2);

/**
 * @brief Muestra los resultados de los calculos realizados.
 *
 * @param kilometros Los kilometros ingresados por el usuario.
 * @param precioAero El valor del viaje en Aerolineas ingresado por el usuario.
 * @param debitoAero El valor del viaje en Aerolineas con tarjeta de debito.
 * @param creditoAero El valor del viaje en Aerolineas con tarjeta de credito.
 * @param btcAero El valor del viaje en Aerolineas con bitcoin.
 * @param unitarioAero El valor por cada Km recorrido del viaje en Aerolineas.
 * @param precioLatam El valor del viaje en Latam ingresado por el usuario.
 * @param debitoLatam El valor del viaje en Latam con tarjeta de debito.
 * @param creditoLatam El valor del viaje en Latam con tarjeta de credito.
 * @param btcLatam El valor del viaje en Latam con bitcoin.
 * @param unitarioLatam El valor por cada Km recorrido del viaje en Latam.
 * @param diferencia La diferencia de valor entre el viaje de Aerolineas y de Latam.
 */
void MostrarResultados(int kilometros,float precioAero ,float debitoAero,float creditoAero,float btcAero,float unitarioAero,float precioLatam,float debitoLatam,float creditoLatam,float btcLatam,float unitarioLatam,float diferencia);



#endif /* BIBLIOTECA_H_ */
