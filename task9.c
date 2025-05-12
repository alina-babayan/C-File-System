#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd1 = open("file9.txt", O_RDONLY);
    if(fd1 == -1)
    {
        perror("fail");
        return 1;
    }
    int fd2 = open("copy_file.txt", O_WRONLY);
    if(fd2 == -1)
    {
        perror("fail");
        close(fd1);
        return 1;
    }
    char buffer[1024];
    ssize_t r_file;
    while((r_file = read(fd1,buffer,sizeof(buffer))) > 0)
    {
        ssize_t w_file = write(fd2,buffer,r_file);
            if(w_file != r_file)
            {
                perror("FAIL");
                close(fd1);
                close(fd2);
                return 1;
            }
    }
    if(r_file < 0)
    {
        perror("FAIL");
    }
    close(fd1);
    close(fd2);
    return 0;
}