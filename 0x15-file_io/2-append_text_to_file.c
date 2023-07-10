#include "main.h"
/**
 *append_text_to_file - a function adding text to file
 *@filename: the name of the file
 *@text_content: the text to be added to the file
 *@file_output: the FILE pointer
 *return: 1 on success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
    if(filename==NULL)
    {
        return -1;
    }
    else if(text_content==NULL&&filename==NULL)
    {
        return -1;
    }else if(text_content==NULL&&filename!=NULL)
    {
        return 1;
    }
    else{
        FILE*file_output=fopen(filename,"a");
        fputs("%s",text_content,file_output);
        fclose(file_output);
        return 1;
}
