/*
> RELOGIO COM STRUCT
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h>

struct relogio {
	int horas, minutos, segundos;
};

void atualizar(struct relogio *p);
void exibir(struct relogio *q);

int main(void) { 
	struct relogio tempo;
	
	tempo.horas = 0;
	tempo.minutos = 0;
	tempo.segundos = 0;
	
	for( ; ; ) {
		atualizar(&tempo);
		exibir(&tempo);
	}
	
	getchar();
	return 0;
}

void atualizar(struct relogio *p) {

	p -> segundos++;

	if(p -> segundos == 60) {
		p -> segundos = 0;
		p -> minutos++;
	}
	
	if(p -> minutos == 60) {
		p -> minutos = 0;
		p -> horas++;
	}
	
	if(p -> horas == 24) {
		p -> horas = 0;
	}

	Sleep(1000);
}

void exibir(struct relogio *q) {
	system("cls");
	printf("%.2d:%.2d:%.2d", q -> horas, q -> minutos, q -> segundos);
}