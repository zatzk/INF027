#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bin = 0, num = 0, resp = 0, cont = 0;
    printf("digite um numero\n");
    scanf("%d", &num);
    do
    {
        bin = (bin * 10) + (num % 2);
        num = num / 2;
        cont++;
    }
    while (num > 0);
    do
    {
        cont--;
        resp = (resp * 10) + (bin % 2);
        bin = (bin - (bin % 2)) / 10;
    }
    while (cont > 0);
    printf("%d", resp);
    return 0;
}
