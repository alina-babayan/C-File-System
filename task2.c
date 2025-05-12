#include <stdio.h>

int main()
{
    FILE* fptr = fopen("file2.txt", "w");
    if(fptr == NULL)
    {
        perror("FAIL");
        return 1;
    }
    int num = 0;
    int count = 0;
    scanf("%d", &count);
    for(int i = 0; i < count; ++i)
    {
        scanf("%d",&num);
        fprintf(fptr,"%d\n",num);
    }
    fclose(fptr);

    return 0;
}