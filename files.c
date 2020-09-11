//
//  files.c
//  
//
//  Created by Castro Bouquet Ildefonso on 10/09/2020.
//  Created by Venegas Ramirez Giovanni Josue on 10/09/2020.
//

/* Libraries */

#include<stdio.h>
#include<stdlib.h>

/* files.c -- Functions */

/**
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
 * Copied from files.h by Cesar Angeles
*/

FILE * file_new(char *name, char *mode)
{
  return fopen(name,mode);
}

/**
 * Writes a bidimensional buffer array into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  columns (size_t ):
 *      length of the buffer array
 *  buff [ ][columns] (long double):
 *      RAM matrix
 *  rows (size_t):
 *      width of the storage buffer
 *
 * @return void.
 * Copied from files.h by Cesar Angeles
*/
void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows)
{
  int i,j;
  for(i=0;i<rows;i++)
  {
    fprintf(file,"%d, ",i);
    for(j=0;j<=1;j++)
    {
      fprintf(file,"%Lf, ",buff[i][j]);
    }
    fprintf(file,"\n");
  }
}