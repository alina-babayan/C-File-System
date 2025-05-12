#include <stdio.h>

int main()
{
    FILE* fptr = fopen("file2.txt", "r");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }

    int count = 0;
    int num = 0;
    int count1 = 0;
    double num1 = 0;

    while(fscanf(fptr, "%d", &num)==1)
    {
        count++;
    }
    while(fscanf(fptr, "%lf", &num1)==1)
    {
        count1++;
    }
    count += count1;
    printf("%d\n",count);
    fclose(fptr);
    
    return 0;
}