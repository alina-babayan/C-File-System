#include <stdio.h>

int main()
{
    FILE* fptr = fopen("file2.txt","r");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    fseek(fptr,0,SEEK_END);
    int k = ftell(fptr);
    printf("%d\n",k);
    fseek(fptr,0,SEEK_SET);
    int count = 0;
    int c = 0;
    while((c = fgetc(fptr) )!= EOF)
    {
        if(c == '\n'){
            count++;
        }
    }
    printf("%d\n",count);
    fseek(fptr,0,SEEK_SET);
    int count_w=1;
    while((c = fgetc(fptr) )!= EOF)
    {
        if(c == ' ')

        {
            count_w++;
        }
    }
    printf("%d\n",count_w);
    fclose(fptr);
    return 0;

}