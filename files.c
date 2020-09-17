//
//  files.c
//  
//
//  Created by Cesar Angeles on 07/09/2020.
//


#define files_IMPORT
#include "files.h"


/**
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/

FILE * file_new(char *name, char *mode){
    FILE * my_file = NULL;
    
    my_file = fopen(name, mode);
    
    if (my_file == NULL){
        puts("FILE OPEN ERROR");
        return NULL;
    }
    else
        return my_file;
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
*/

void file_num_write(FILE * file, size_t columns, long double buff[][columns], size_t rows) {
    size_t row, column;
    
    for(row = 0; row < rows; row ++){
        for(column = 0; column < columns; column ++){
            fprintf(file, "%Lf\t", buff[row][column]);
        }
        fprintf(file, "\n");
    }
}
