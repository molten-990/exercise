#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, c;
    printf("Unesite koeficijente a,b,c:\n");
    scanf("%f,%f,%f", &a, &b, &c);
    if((a>=(-10) && a<=10)&&(b>=(-10) && b<=10)&&(c>=(-10) && c<=10)){
        float x, y;
        printf("Unesite vrijednost x:\n");
        scanf("%f", &x);
        y=(a*x*x)+(b*x)+c;
        printf("prva derivacija u tacki %.2f je %.2f", x, y);
    }
    else printf("koeficijenti a, b, c nisu u zadanom intervalu");

    return 0;
}
