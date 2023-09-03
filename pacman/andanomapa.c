#include "mapa.h"


void andanomapa(INFO** m, int origemx, int origemy, int finalx, int finaly) {
	char personagem = (*m)->mapa[origemx][origemy];
	(*m)->mapa[finalx][finaly] = personagem;
	(*m)->mapa[origemx][origemy] = VAZIO;
}