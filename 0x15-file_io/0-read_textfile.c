#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - read a file and print it
 *@filename: the name of the file which will be read
 *@letters: number of the letters in the file
 *@counter: to count the number of the letters that has been read
 *@file_out_put: the varibalue contain the file
 *retun: void 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file_out_put;
    size_t counter=0;
    file_out_put = fopen("%s",filename, "r");
    if(file_out_put==NULL)
    {
        return 0;
    }
    while(fscanf(file_out_put,"%c",&file_out_put)!=EOF||counter!=letters)
    {
        counter++;
        printf("%s\n",file_out_put);
    }
    fclose(file_out_put);
}
