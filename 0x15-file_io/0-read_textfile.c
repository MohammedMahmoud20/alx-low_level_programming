#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - read a file and print it
 *@filename: the name of the file which will be read
 *@letters: number of the letters in the file
 *@file_out_put: the varibalue contain the file
 *@buffer: to store the file character
 *byte: to be printed in the stdout
 *return: 0 if there is an error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_out_put;
    char buffer [1024*8];
    file_out_put =open ( filename,"r");
    if(!filename||!letters)
    {
        return 0;
    }
    if(file_out_put=-1)
    {
        return 0;
    }
    ssize_t byte;
    byte=read(file_out_put,&buffer[0],letters);
    byte=write(STDOUT_FILENO,&buffer[0],byte);
    close(file_out_put);
    return (byte);
}
