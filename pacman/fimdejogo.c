#include "mapa.h"

int fimdejogo(INFO *m) {
	int fogefogenomapa = 0;
	for (int i = 0; i < m->linhas; i++) {
		for (int j = 0; j < m->colunas; j++) {
			if (m->mapa[i][j] == HEROI) {
				fogefogenomapa = 1;
				break;
			}
		}
	}

	return !fogefogenomapa;
}