#include <stdio.h>
#include <stdlib.h>

void nacrtajPiramidu(int stepen) {
    // nacrtaj piramidu
    int i,j;
    for (i=0; i<stepen; i++){
         for (j=0; j<=i; j++)
         {
             printf("*");
         }
         printf("\n");
    }
}

int main()
{
    printf("Unesi stepen piramide!\n");
    int stepen;
    scanf("%d", &stepen);
    nacrtajPiramidu(stepen);
    return 0;
}
