/*
> FUNÇÕES QUE RETORNAM PONTEIROS
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char *encCaractere(char caractere, char *str);

int main(){
    
    char frase[80];
    char chr, *pointer;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite um caractere: \n");
    chr = getche();

    pointer = encCaractere(chr, frase);

    if(pointer) printf("\n\n%s\n\n", pointer); // se encontrar correspondencia ele vai imprimir a partir do primeiro caractere encontrado na frase
    else printf("\n\nNENHUMA PARIDADE ENCONTRADA!"); // caso ele não encontra

    system("PAUSE");
    return 0;
}

char *encCaractere(char caractere, char *str){
    int counter = 0;

    while ((caractere != str[counter]) && (str[counter] != '\0')) counter++;
    
    if(str[counter]) return(&str[counter]); // SE houver correspondencia, retorna o ponteiro para localização
    else return(char *) '\0'; // retorna a nulo
}