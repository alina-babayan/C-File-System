#include <stdio.h>

int main()
{
    FILE* fptr = fopen("file2.txt","r");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    char c = fgetc(fptr);
    if(c != EOF)
    {
        printf("%c", c);
    }
    fclose(fptr);
    return 0;
}