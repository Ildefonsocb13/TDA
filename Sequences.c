//
//  Sequences.c
//  
//
//  Created by Castro Bouquet Ildefonso on 10/09/2020.
//  Created by Venegas Ramirez Giovanni Josue on 10/09/2020.
//

/* Libraries */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Sequences.c -- Functions */

/**
 * Returns the value of the fibonacci sequence at index n calculated sequentially
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
 * Copied from Sequences.h by Cesar Angeles
*/
long long int Sequences_sfibo(long long int n)
{
    int i;
    long long int num=0,num2=1,res=1;
    for(i=1;i<=n;i++)
    {
        res = num+num2;
        num = num2;
        num2 = res;
    }
}

/**
 * Returns the value of the fibonacci sequence at index n calculated recursively
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
 * Copied from Sequences.h by Cesar Angeles
*/
long long int Sequences_rfibo(long long int n)
{
  if (n == 1)
  {
    return 1;
  }
  if(n > 1)
  {
    return Sequences_rfibo(n - 1) + Sequences_rfibo(n - 2);
  }
  else
  {
    return 0;
  }
}

/**
 * Adds values of time in the variable "buff" from the fibonacci sequence
 * @param
 *      rango (int rango):
 *          How many sequences to do
 *      buff  (long double buff):
 *          2 dimension variable for keeping values of time
*/
void Fibonacci_s(int rango, long double buff[][0])
{
  double Time = 0.0;
  for(int i=0;i<rango;i++)       
  {
    clock_t Start = clock();
    Sequences_sfibo(i);
    clock_t End = clock();
    Time = (double) (End-Start) /CLOCKS_PER_SEC;
    buff[i][0]=(long double) Time;
  }
}

/**
 * Adds values of time in the variable "buff" from the fibonacci Recursive
 * @param
 *      o (int o):
 *          How many sequences to do
 *      buff  (long double buff):
 *          2 dimension variable for keeping values of time
*/
void Fibonacci_r(int o, long double buff[][1])
{
  double Time = 0.0;
  for(int n=0;n<o;o++)
  {
    clock_t Start = clock();
    Sequences_rfibo(n);
    clock_t End = clock();
    Time = (double) (End-Start) /CLOCKS_PER_SEC;
    buff[n][1]= (long double)Time;
  }
}