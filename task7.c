#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    FILE *fptr = fopen("factorials.txt", "w");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    int mul = 1;
    for(int i = 1; i <= num; ++i)
    {
        mul *= i;
        fprintf(fptr,"%d", mul);
        if(i != num)
        {
            fprintf(fptr,",");
        }
    }
    fclose(fptr);

    return 0;

}