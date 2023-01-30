#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char command[50];
    int error = 0;

    strcpy(command, "ls -l");
    error = system(command);
    printf("%s\n", command);
    printf("%d\n", error);
    return(0);
} 