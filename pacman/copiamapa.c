#define _CRT_SECURE_NO_WARNINGS
#include "mapa.h"
#include "alocamapa.h"
#include <string.h>

void copiamapa(INFO* destino, INFO** origem) {
	destino->linhas = (*origem)->linhas;
	destino->colunas = (*origem)->colunas;
	alocamapa(&destino);
	for (int i = 0; i < (*origem)->linhas; i++) {
		strcpy(destino->mapa[i], (*origem)->mapa[i]);
	}
}