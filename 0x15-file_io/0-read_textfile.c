#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - read a file and print it
 *@filename: the name of the file which will be read
 *@letters: number of the letters in the file
 *@file_out_put: the varibalue contain the file
 *retun: 0 if there is an error 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file_out_put;
    file_out_put = fopen ( filename,"r");
    if(file_out_put!=NULL)
    {
        char c;
        while ((c=fgetc(file_out_put))!=EOF)
        {
            putchar(c);
        }
        fclose(file_out_put);
        
    }else{
        return 0;
    }
}
