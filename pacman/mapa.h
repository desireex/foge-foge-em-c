#pragma once
#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define HEROI '@'
#define VAZIO '.'
#define FANTASMA 'F'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'
#define BOMBA 'b'
#define CHAVE 'C'

struct info {
	char** mapa;
	int linhas;
	int colunas;
};
typedef struct info INFO;

struct posicao {
	int x;
	int y;
};
typedef struct posicao POSICAO;
