#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
#include "alocamapa.h"

void le_mapa(INFO* m) {
	FILE* f;
	f = fopen("C:\\projetosC\\pacman\\pacman\\mapa.txt", "r");
	if (f == NULL) {
		printf("erro ao abrir o mapa");
		exit(1);
	}
	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

	alocamapa(&m);
	
	for (int i = 0; i < 5; i++) {
		fscanf(f, "%s", m->mapa[i]);
	}
	fclose(f);
}