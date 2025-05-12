#include <stdio.h>

int main()
{
    FILE* fptr = fopen("file2.txt", "r");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    int num = 0;
    int count = 0;
    int sum = 0;
    while(fscanf(fptr, "%d", &num)==1)
    {
        sum += num;
        count++;
    }
    fclose(fptr);
    double a = sum / count;
    fptr = fopen("file2.txt", "a");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    fprintf(fptr, "%f\n",a);
    fclose(fptr);
    return 0;
}