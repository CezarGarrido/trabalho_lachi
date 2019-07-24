

#include <stdio.h>
#include <unistd.h>

extern char **environ;


void printaVariaveis();
int main()
{
    printaVariaveis();
}

void printaVariaveis()
{
    int i = 0;
    while(environ[i]) {
        printf("%s\n", environ[i++]); // prints in form of "variable=value"
    }
}