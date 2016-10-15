#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Unesite skup S1 (a,b):\n");
    scanf("%d,%d", &a, &b);
    printf("Unesite skup S2 (c,d)\n");
    scanf("%d,%d", &c, &d);
    if(a==c && b==d)printf("skupovi su jednaki i njihov presjek je (%d,%d)", a, b);
    else if((a<c && (b==d || b>d))||(b>d && (a==c || a<c)))printf("Skup S2 je sadrzan u skupu S1 i njihov presjek je (%d,%d)", c, d);
    else if((a>c && (b==d || b<d))||(b<d && (a==c || a>c)))printf("Skup S1 je sadrzan u skupu S2 i njihov presjek je (%d,%d)", a, b);
    else if(a<c && c<b && b<d)printf("Presjek ova dva skupa je (%d,%d)", c, b);
    else if(a>c && d>a && b>d)printf("Presjek ova dva skupa je (%d,%d)", a, d);
    else printf("Presjek ova dva skupa je {}");
    return 0;
}
