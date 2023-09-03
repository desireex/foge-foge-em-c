#include "mapa.h"

int ehvalida(INFO** m, int x, int y) {
	if (x >= (*m)->linhas || y >= (*m)->colunas || (*m)->mapa[x][y] == PAREDE_VERTICAL
		|| (*m)->mapa[x][y] == PAREDE_HORIZONTAL) {
		return 0;
	}
	return 1;
}