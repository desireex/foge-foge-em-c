#include "mapa.h"

void encontramapa(INFO* m, POSICAO* p, char c) {
	for (int i = 0; i < m->linhas; i++) {
		for (int j = 0; j < m->colunas; j++) {
			if (m->mapa[i][j] == HEROI) {
				p->x = i;
				p->y = j;
				break;
			}
		}
	}
}