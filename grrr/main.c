#include <stdio.h>

int main() {
	int i, broj, brojac=0, n;
	printf("Unesite broj: ");
	scanf("%d",&broj);
	if(broj<=0){
		printf("Broj nije prirodan.");
		return 0;
	}
	else if(broj==1){
		printf("Broj nije ni prost ni slozen.");
		return 0;
	}
	else {
		n=broj-1;
		for(i=n; i>1; i--){
			brojac=brojac+(broj%i);
			if(brojac==0){
                printf("Broj je slozen.");
                return 0;
			}
			else {
                printf("Broj je prost.");
                return 0;
            }
		}

	}
	return 0;
}
