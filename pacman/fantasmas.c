#include "mapa.h"
#include "ehvalida.h"
#include "andanomapa.h"
#include "copiamapa.h"
#include "liberamapa.h"
#include "fantasmavai.h"

void fantasmas(INFO* m) {
	INFO copia;
	
	copiamapa(&copia, &m);

	for (int i = 0; i < m->linhas; i++) {
		for (int j = 0; j < m->colunas; j++) {
			if (copia.mapa[i][j] == FANTASMA) {
				int xdestino; 
				int ydestino;
				int encontrou = fantasmavai(&m, i, j, &xdestino, &ydestino);
				if (encontrou) {
					andanomapa(&m, i, j, xdestino, ydestino);
				}
			}
 		}
	}
	liberamapa(&copia);

}