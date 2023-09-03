#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "mapa.h"

void alocamapa(INFO** m) {
	(*m)->mapa = malloc(sizeof(char*) * (*m)->linhas);
	for (int i = 0; i < (*m)->linhas; i++) {
		(*m)->mapa[i] = malloc(sizeof(char) * ((*m)->colunas + 1));
	}
}