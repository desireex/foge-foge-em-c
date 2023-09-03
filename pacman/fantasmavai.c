#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mapa.h"
#include "ehvalida.h"

int fantasmavai(INFO** m, int xatual, int yatual, int* xdestino, int* ydestino) {
	int opcoes[4][2] = {
		{xatual, yatual + 1},
		{xatual + 1, yatual},
		{xatual, yatual - 1},
		{xatual - 1, yatual}
	};
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		int posicao = rand() % 4;
		if (ehvalida(m, opcoes[posicao][0], opcoes[posicao][1])
			&& (*m)->mapa[opcoes[posicao][0]][opcoes[posicao][1]] != FANTASMA
			&& (*m)->mapa[opcoes[posicao][0]][opcoes[posicao][1]] != CHAVE) {
			*xdestino = opcoes[posicao][0];
			*ydestino = opcoes[posicao][1];
			return 1;
		}
	}
	return 0;
}