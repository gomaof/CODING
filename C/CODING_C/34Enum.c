/*
> ENUMERAÇÕES
// semelhante a structs
*/

#include <stdio.h>
#include <stdlib.h>
/*

enum exemplo{i1 = 1,i2,i3=150,i4}; // cada um dos itens tem valor inteiro nas ENUMs
// em outras palavras é como se fosse numeros já declarados = 0
// voce declara nomes para valores inteiros
// ele vai dando segmento aos numeros a seguir, ou seja, enumerando as proximas variaveis a seguir
*/

enum componentes{transistor,capacitor,resistor,diodo,mcu};
char matriz[][20] =
{
    "transitor",
    "capacitor",
    "resistor",
    "diodo",
    "mcu"
};

int main(){
    
    enum componentes referencia;

    for( referencia = transistor; referencia <= mcu; referencia++){
        printf("%s\n", matriz[referencia]);
    }

    system("PAUSE");
    return 0;
}