#include "mapa.h"
#include "ehvalida.h"
#include "explodepilula.h"

void explodepilula(INFO* m, int x, int y, int qtd) {
	explodepilula2(m, x, y, 0, 1, 3);
	explodepilula2(m, x, y, 0, -1, 3);
	explodepilula2(m, x, y, 1, 0, 3);
	explodepilula2(m, x, y, -1, 0, 3);
}

void explodepilula2(INFO* m, int x, int y, int somax, int somay, int qtd) {
	if (qtd == 0) return;
	int novox = x + somax;
	int novoy = y + somay;
	if (!ehvalida(&m, novox, novoy)) return;
	m->mapa[novox][novoy] = VAZIO;
	explodepilula2(m, novox, novoy, somax, somay, qtd - 1);
}