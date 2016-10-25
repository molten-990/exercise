#include <stdio.h>
#include <math.h>
int main() {
	float I1,II1,prisustvo1,zad1,zi1,I2,II2,prisustvo2,zad2,zi2,I3,II3,prisustvo3,zad3,zi3,bod1,bod2,bod3;
	printf("Unesite bodove za Tarika: \n");
	printf("I parcijalni ispit: \n");
	scanf("%f",&I1);
	printf("II parcijalni ispit: \n");
	scanf("%f",&II1);
	printf("Prisustvo: \n");
	scanf("%f",&prisustvo1);
	printf("Zadace: \n");
	scanf("%f",&zad1);
	printf("Zavrsni ispit: \n");
	scanf("%f",&zi1);
	printf("Unesite bodove za Bojana: \n");
	printf("I parcijalni ispit: \n");
	scanf("%f",&I2);
	printf("II parcijalni ispit: \n");
	scanf("%f",&II2);
	printf("Prisustvo: \n");
	scanf("%f",&prisustvo2);
	printf("Zadace: \n");
	scanf("%f",&zad2);
	printf("Zavrsni ispit: \n");
	scanf("%f",&zi2);
	printf("Unesite bodove za Mirzu: \n");
	printf("I parcijalni ispit: \n");
	scanf("%f",&I3);
	printf("II parcijalni ispit: \n");
	scanf("%f",&II3);
	printf("Prisustvo: \n");
	scanf("%f",&prisustvo3);
	printf("Zadace: \n");
	scanf("%f",&zad3);
	printf("Zavrsni ispit: \n");
	scanf("%f",&zi3);
	if (I1>20 || I1<0 || II1>20 || II1<0 || prisustvo1>10 || prisustvo1<0 || zad1>10 || zad1<0 || zi1>40 || zi1<0 || I2>20 || I2<0 || II2>20 || II2<0 || prisustvo2>10 || prisustvo2<0 || zad2>10 || zad2<0 || zi2>40 || zi2<0 || I3>20 || I3<0 || II3>20 || II3<0 || prisustvo3>10 || prisustvo3<0 || zad3>10 || zad3<0 || zi3>40 || zi3<0)
	{
		printf("Neispravan broj bodova");
     	return 0;
	}
	bod1=I1+II1+prisustvo1+zad1+zi1;
	bod2=I2+II2+prisustvo2+zad2+zi2;
	bod3=I3+II3+prisustvo3+zad3+zi3;
	if(bod1<=55)
	{
		printf("student pao");
	}
	else if ("bod1>55 bod1<=65")
	{
		printf("ocjena 6");
	}
	else if ("bod1>65 bod1<=75")
	{
		printf("ocjena 7");
	}
	else if ("bod1>75 bod1<=85")
	{
		printf("ocjena 8");
	}
	else if ("bod1>85 bod1<=92")
	{
		printf("ocjena 9");
	}
	else ("bod1>92 bod1<=100")
	{
		printf("ocjena 10");
	}
	if(bod2<=55)
	{
		printf("student pao");
	}
	else if ("bod2>55 bod2<=65")
	{
		printf("ocjena 6");
	}
	else if ("bod2>65 bod2<=75")
	{
		printf("ocjena 7");
	}
	else if ("bod2>75 bod2<=85")
	{
		printf("ocjena 8");
	}
	else if ("bod2>85 bod2<=92")
	{
		printf("ocjena 9");
	}
	else ("bod2>92 bod2<=100")
	{
		printf("ocjena 10");
	}
	if(bod3<=55)
	{
		printf("student pao");
	}
	else if ("bod3>55 bod3<=65")
	{
		printf("ocjena 6");
	}
	else if ("bod3>65 bod3<=75")
	{
		printf("ocjena 7");
	}
	else if ("bod3>75 bod3<=85")
	{
		printf("ocjena 8");
	}
	else if ("bod3>85 bod3<=92")
	{
		printf("ocjena 9");
	}
	else ("bod3>92 bod3<=100")
	{
		printf("ocjena 10");
	}


	return 0;
}
