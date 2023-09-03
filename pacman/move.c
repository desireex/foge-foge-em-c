#include <stdio.h>
#include "mapa.h"
#include "ehvalida.h"
#include "andanomapa.h"
#include "ganhaojogo.h"

void move(char direcao, INFO* m, POSICAO* p, int* tempilula, int* ganhou) {

	if (direcao != CIMA && direcao != ESQUERDA && direcao != BAIXO && direcao != DIREITA) {
		printf("posicao invalida\n");
		return;
	}
	int proximox = p->x, proximoy = p->y;
	switch (direcao) {
		case ESQUERDA:
			proximoy--;
			break;
		case DIREITA:
			proximoy++;
			break;
		case CIMA:
			proximox--;
			break;
		case BAIXO:
			proximox++;
			break;
	}
	if (!ehvalida(&m, proximox, proximoy)) {
		return;
	}
	if (m->mapa[proximox][proximoy] == PILULA) {
		*tempilula = 1;
	}
	if (m->mapa[proximox][proximoy] == FANTASMA) {
		m->mapa[p->x][p->y] = VAZIO;
	}
	else if (m->mapa[proximox][proximoy] == CHAVE) {
		m->mapa[p->x][p->y] = VAZIO;
		ganhaojogo(&ganhou);
	}
	else {
		andanomapa(&m, p->x, p->y, proximox, proximoy);
	}
	p->x = proximox;
	p->y = proximoy;
}