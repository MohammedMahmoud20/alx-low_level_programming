#include "main.h"
/**
 *create_file - creating a new file
 *@filename: the name of the new file
 *@text_content: the content of the file
 *@file_output: the pointer to open,create the file
 *return: 0 if there is an error
*/
int create_file(const char *filename, char *text_content)
{
	FILE *file_output;
	file_output=fopen("%s",filename,"w");
	if (file_output==NULL){
	return 0;
    	}
    	fputs("%s\n",text_content,file_output);
    	fclose(file_output);
}
