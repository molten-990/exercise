#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sistolickiP;
    printf("Unesite vas sistolicki pritisak:\n");
    scanf("%f", &sistolickiP);
    if(sistolickiP>=65 && sistolickiP<=90) printf("Vas sistolicki pritisak je normalan\n");
    else printf("Vas sistolicki pritisak nije normalan");
    return 0;
}
