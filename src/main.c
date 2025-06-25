#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define CSV_HEAD 256
void readCSVHeader(char *buf);

int main(void)
{
    setlocale(LC_ALL, "");
    return 0;
}

void readCSVHeader(char *buf){
    if(sizeof(buf) != CSV_HEAD){
        puts("O head do ");
        return;
    }
}