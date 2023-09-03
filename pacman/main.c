#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
#include "ehvalida.h"
#include "encontramapa.h"
#include "liberamapa.h"
#include "alocamapa.h"
#include "le_mapa.h"
#include "fimdejogo.h"
#include "imprimemapa.h"
#include "andanomapa.h"
#include "move.h"
#include "copiamapa.h"
#include "fantasmas.h"
#include "fantasmavai.h"
#include "explodepilula.h"
#include "imprimeparte.h"
#include "ganhaojogo.h"

INFO m;
POSICAO heroi;
int tempilula = 0;
int ganhou = 0;


int main() {
	le_mapa(&m);
	encontramapa(&m, &heroi, HEROI);
	do {
		imprimemapa(&m);
		printf("TEM PILULA:%s\n" ,(tempilula ? "SIM" : "NAO"));
		char comando;
		scanf(" %c", &comando);
		if (comando == BOMBA && tempilula) {
			explodepilula(&m, heroi.x, heroi.y, 3);
			tempilula = 0;
		}
		else {
			move(comando, &m, &heroi, &tempilula, &ganhou);
		}
		fantasmas(&m);
	} while(!fimdejogo(&m));

	liberamapa(&m);

	if (ganhou) {
		printf("VOCE GANHOU O JOGO, PARABENS!");
	}
	else {
		printf("VOCE PERDEU O JOGO, TENTE NOVAMENTE.");
	}


	return 0;
}
