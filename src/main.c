#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

unsigned int getLineSize(char *filename)
{
    char c = ' ';
    int i = 0;
    while ((c = fgetc(filename)) != EOF)
    {
        i++;
    }
}

int main(void)
{
    setlocale(LC_ALL, "");
    return 0;
}