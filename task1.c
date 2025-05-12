#include <stdio.h>


int foo(int num)
{
    if (num <= 1) return 0;
    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    FILE * fptr = fopen("file.txt", "w");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    for(int i = 1; i <= 15; ++i)
    {
        if(foo(i))
        {
            fprintf(fptr,"%d",i);
        }
    }
    fclose(fptr);
    return 0;
}