#include<stdio.h>
extern int i=1;
extern int i;
extern int i;

int main()
{
    printf("%i",i);
}