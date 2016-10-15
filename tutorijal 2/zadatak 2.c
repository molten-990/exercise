#include <stdio.h>
#include <stdlib.h>

int main()
{
     float SP, DP, P;
    printf("Unesite vas sistolicki i dijastolicki pritisak i puls:\n");
    scanf("%f,%f,%f", &SP, &DP, &P);
    if(SP>=65 && SP<=90) printf("Vas sistolicki pritisak je normalan\n");
    else printf("Vas sistolicki pritisak nije normalan");
    if(DP>=105 && DP<=140) printf("Vas dijastolicki pritisak je normalan\n");
    else printf("Vas dijastolicki pritisak nije normalan\n");
    if(P>=65 && P<=80) printf("Vas puls je normalan");
    else printf("Vas puls nije normalan");
    return 0;
}
