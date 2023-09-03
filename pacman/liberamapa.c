#include "mapa.h"

void liberamapa(INFO* m) {
	for (int i = 0; i < m->linhas; i++) {
		free(m->mapa[i]);
	}
	free(m->mapa);
}