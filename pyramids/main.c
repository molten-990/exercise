#include <stdio.h>
#include <stdlib.h>

// draws pyramid with n number of rows
// for n = 3
//   *
//  ***
// *****
void drawPyramid() {
    //code
    int n;
    printf("type in the number of rows\n");
    scanf("%d", &n);
    int i, j, k;
    for(i=0; i<=n; i++)
    {
        for (k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for (j=1; j<=(2*n-1)-(2*(n-i)); j++)
        {
            printf("*");
        }
        for (k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

// draws empty pyramid with n number of rows
// for n = 4
//    *
//   * *
//  *   *
// *******
void drawEmptyPyramid() {

int i, j, n;
printf("type in the number of wanted rows\n");
scanf("%d", &n);
for (i=1; i<=n; i++)
{
    for (j=1; j<=n-i; j++)
    {
        printf(" ");
    }
    if (i!=n){
    printf("*");
   if (i>1)
    {
        for (j=1; j<=(2*n-1)-2*(n-i+1); j++)
        {
            printf(" ");
        }
        printf("*");
    }

    for (j=1; j<=n-i; j++)
    {
        printf(" ");
    }
    }if (i==n){
      for (j=1; j<=(2*n-1)-(2*(n-i)); j++)
      {
          printf("*");
      }
    }
    printf("\n");
}
}

void drawPyramidHalf() {
    // nacrtaj piramidu
    printf("Unesi stepen piramide!\n");
    int n;
    scanf("%d", &n);
    int i,j;
    for (i=0; i<n; i++){
         for (j=0; j<=i; j++)
         {
             printf("*");
         }
         printf("\n");
    }
}

int main()
{
    int stop = 0;
    while(stop == 0) {
        drawEmptyPyramid();
        printf("Again? (Y/N):");
        char answer;
        scanf(" %c", &answer);
        if (answer == 'N' || answer == 'n') stop = 1;
    }
    return 0;
}
