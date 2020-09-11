//
//  main.c
//  
//
//  Created by Castro Bouquet Ildefonso on 10/09/2020.
//  Created by Venegas Ramirez Giovanni Josue on 10/09/2020.
//

/* Libraries */

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Custom Libraries */
#include "files.h"
#include "files.c"
#include "Sequences.h"
#include "Sequences.c"

/* main.c -- Function prototypes */

/**
 * Adds values of time in the variable "buff" from the fibonacci sequence
 * @param
 *      rango (int rango):
 *          How many sequences to do
 *      buff  (long double buff):
 *          2 dimension variable for keeping values of time
*/
extern void Fibonacci_s(int rango, long double buff[][0]);

/**
 * Adds values of time in the variable "buff" from the fibonacci Recursive
 * @param
 *      o (int o):
 *          How many sequences to do
 *      buff  (long double buff):
 *          2 dimension variable for keeping values of time
*/
extern void Fibonacci_r(int o, long double buff[][1]);

/* Main Function */
int main(void)
{
  long double buffer[100][2];
  int rango;
  FILE *Archivo;
  char file_Name="grafica.txt",file_mode='w';
  size_t columns=2;

  printf("Serie Fibonacci\n");
  printf("Escribe el rango de iteraciones:\n");
  scanf(" %d",&rango);

  Fibonacci_s(rango,buffer[][0]);
  Fibonacci_r(rango,buffer[][1]);

  Archivo=file_new(&file_Name,&file_mode);
  file_num_write(Archivo,columns,buffer[][columns],rango);//Dudas aqui
  fclose(Archivo);
}