#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b1, b2, b3;
    printf("Unesite tri razlicita broja u intervalu od 50 do 200\n");
    scanf("%d,%d,%d", &b1, &b2, &b3);
    if ((b1>=50 && b1<=200) && (b2>=50 && b2<=200) && (b3>=50 && b3<=200)){

        if((b1<=b2)&&(b2<=b3))printf("%d\n%d\n%d\n", b1, b2, b3);

        else if((b2<=b1)&&(b1<=b3))printf("%d\n%d\n%d\n", b2, b1, b3);

        else if((b3<=b1)&&(b1<=b2))printf("%d\n%d\n%d\n", b3, b1, b2);

        else if((b2<=b3)&&(b3<=b1))printf("%d\n%d\n%d\n", b2, b3, b1);

        else if((b3<=b2)&&(b2<=b1))printf("%d\n%d\n%d\n", b3, b2, b1);

        else if((b1<=b3)&&(b3<=b2))printf("%d\n%d\n%d\n", b1, b3, b2);

        if((b1!=b2)&&(b1!=b3)&&(b3!=b2))printf("Unijeli ste 3 razlicita boja\n");
        else if(((b1!=b2)&&((b2==b3))||(b1==b3))||(((b1!=b3)&&(b1==b2))||(b3==b2))||(((b2!=b3)&&(b2==b1))||(b3==b1)))printf("Unijeli ste 2 razlicita broja");
        else printf("Unijeli ste iste brojeve");
    }
    else printf("Unijeli ste brojeve koji nisu u zadatom opsegu\n");
    return 0;
}
