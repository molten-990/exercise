#include <stdio.h>
#include <stdlib.h>

int daLiJeBroj(char znak) {
    if (znak == '0'|| znak == '1' || znak == '2'||
             znak == '3'|| znak == '4'|| znak == '5'||
              znak == '6'|| znak == '7'|| znak == '8'|| znak == '9') {
                  return 1;
              }
              return 0;
}

int daLiJeOperator(char znak) {
    if (znak == '*' || znak == '+' || znak == '-' || znak == '/') return 1;
    return 0;
}

int nadjiBroj(char znak) {
    if (znak == '0') return 0;
    if (znak == '1') return 1;
    if (znak == '2') return 2;
    if (znak == '3') return 3;
    if (znak == '4') return 4;
    if (znak == '5') return 5;
    if (znak == '6') return 6;
    if (znak == '7') return 7;
    if (znak == '8') return 8;
    if (znak == '9') return 9;
}

int pretvoriUBroj(char niz[],int brojElemenata) {
    int rezultat = 0;
    int stepen = 1;
    int brojac = brojElemenata - 1;
    while (brojac >= 0) {
        char znak = niz[brojac];
        int broj = nadjiBroj(znak);
        rezultat = rezultat + broj * stepen;
        stepen = stepen * 10;
        brojac = brojac - 1;
    }
    return rezultat;
}

int primijeniOperaciju(int broj1, int broj2, char operacija) {
    if (operacija == '+') return broj1 + broj2;
    if (operacija == '-') return broj1 - broj2;
    if (operacija == '*') return broj1 * broj2;
    if (operacija == '/') return broj1 / broj2;
    return 0;
}
int main()
{
    char izraz[100];
    int i = 0;
    printf("I am a calculator ... Enter my task!!\n");
    gets(izraz);

    int brojevi[100];
    int brojeviBrojac = 0;
    char operacije[100];
    int operacijeBrojac = 0;

    char zadnjiZnak;
    char zadnjiBroj[100];
    int zadnjiBrojBrojac = 0;

    int daLiJePogrijesio = 0;
    do {
        zadnjiZnak = izraz[i];
        if (daLiJeBroj(zadnjiZnak)){
                zadnjiBroj[zadnjiBrojBrojac] = zadnjiZnak;
                zadnjiBrojBrojac =  zadnjiBrojBrojac + 1;
        }
        else if(daLiJeOperator(zadnjiZnak)) {
            operacije[operacijeBrojac] = zadnjiZnak;
            operacijeBrojac = operacijeBrojac  + 1;
            int zadnjiBrojKaoBroj = pretvoriUBroj(zadnjiBroj, zadnjiBrojBrojac);
            brojevi[brojeviBrojac] = zadnjiBrojKaoBroj;
            brojeviBrojac = brojeviBrojac  + 1;
            zadnjiBrojBrojac = 0;
        } else if (zadnjiZnak != '\0') {
            daLiJePogrijesio = 1;
        }
        i = i + 1;
    } while(zadnjiZnak != '\0' && daLiJePogrijesio == 0);

    if (daLiJePogrijesio == 1) {
        printf("Pogrijesili ste u znaku");
        return 0;
    }

    int zadnjiBrojKaoBroj = pretvoriUBroj(zadnjiBroj, zadnjiBrojBrojac);
    brojevi[brojeviBrojac] = zadnjiBrojKaoBroj;
    brojeviBrojac = brojeviBrojac  + 1;

    int rezultat = brojevi[0];
    int brojac = 0;
    for (brojac = 1; brojac < brojeviBrojac; brojac++) {
        rezultat = primijeniOperaciju(rezultat, brojevi[brojac], operacije[brojac-1]);
    }
    printf("Rezultat je: %s = %d",izraz, rezultat);
    return 0;
}
