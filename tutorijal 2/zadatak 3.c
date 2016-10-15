#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month;
    printf("Type in your dan and month of birth: example=> 21,5\n");
    scanf("%d,%d", &day, &month);
    if((month==1 && day>=20 && day<=31)||(month==2 && day>0 && day<=18))printf("Vodolija");
    else if ((month==2 && day>=19 && day<=29) || (month==3 && day>0 && day<=20))printf("Ribe");
    else if((month==3 && day>=21 && day<=31) || (month==4 && day>0 && day<=19))printf("Ovan");
    else if ((month==4 && day>=20 && day<=30) || (month==5 && day>0 && day<=20))printf("Bik");
    else if((month==5 && day>=21 && day<=29) || (month==6 && day>0 && day<=20))printf("Blizanci");
    else if((month==6 && day>=21 && day<=30) || (month==7 && day>0 && day<=22))printf("Rak");
    else if((month==7 && day>=23 && day<=31) || (month==8 && day>0 && day<=22))printf("Lav");
    else if((month==8 && day>=23 && day<=31) || (month==9 && day>0 && day<=22))printf("Djevica");
    else if((month==9 && day>=23 && day<=30) || (month==10 && day>0 && day<=22))printf("Vaga");
    else if((month==10 && day>=23 && day<=30) || (month==11 && day>0 && day<=21))printf("Skorpija");
    else if((month==11 && day>=22 && day<=30) || (month==12 && day>0 && day<=21))printf("Strijelac");
    else if((month==12 && day>=22 && day<=31) || (month==1 && day>0 && day<=19))printf("Jarac");
    else printf("Unijeli ste pogresan datum");
}
