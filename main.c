#include <stdio.h>
#include <stdlib.h>

typedef struct {
                   long codigo;
                   char nome[80];
                   int score;
		} cliente;
typedef cliente elemento;

/* DECLARACOES GLOBAIS DE CONSTANTES */
const elemento VL_NULO = {0, ""};

#include "tad_lst1.h"
#include "persistencia.h"

tipo_lista lista;

void monta_tela() {
	  printf("\n0 - listar");
   	printf("\n1 - incluir");
   	printf("\n2 - alterar");
   	printf("\n3 - excluir");
   	printf("\n9 - sair\n");
}

char escolhe_opcao() {
	return getchar();
}

int posicao(int tam) {
	int pos;
	if (tam > 0) {
   		do {
			printf("\nDigite a posicao: ");
         		scanf("%d",&pos);
      		} while ((pos<0) || (pos>lista.tamanho+1));
	return pos;
   }
   else
      	return 1;
}

limpa_tela() {
	system("clear");
}

entra_codigo(long *codigo) {
	printf("\nQual o codigo do cliente? "); fflush(stdin); scanf("%d", codigo);
}

entra_nome(char *nome) {
	printf("\nQual o nome do cliente? "); fflush(stdin); scanf("%s", nome);
}

void incluir() {
	int pos; elemento elem=VL_NULO;
	limpa_tela();
	entra_codigo(&elem.codigo);
	entra_nome(&elem.nome);
	pos = posicao(tamanho(lista));
   	if (incluir_elemento(&lista,pos,elem))
       		printf("Elemento incluído com sucesso!");
	getchar();
}

void listar() {
	int i, tam; elemento elem;
	limpa_tela(); printf("\n");
   tam = tamanho(lista);
   if (tam > 0) {
	   for (i=1;i<=tam;i++) {
	      if (obter_elemento(lista,i,&elem))
	         printf("\n%d - %d - %s - %d", i, elem.codigo, elem.nome, elem.score);
      }
   }
   else
      printf("Lista vazia");
   printf("\n<tecle ENTER para continuar>");getchar();getchar();
}

void alterar() {
	int pos; elemento elem=VL_NULO;
	limpa_tela();
	listar();
	pos = posicao(tamanho(lista));
	entra_codigo(&elem.codigo);
	entra_nome(&elem.nome);
   	if (alterar_elemento(&lista,pos,elem))
       		printf("Elemento alterado com sucesso!");
	getchar();
}

void excluir() {
	int pos;
	limpa_tela();
	listar();
	pos = posicao(tamanho(lista));
	if (excluir_elemento(&lista,pos))
       		printf("Elemento excluído com sucesso!");
	getchar();
}

int main() {
	char opcao;
	inicializa_lista(&lista);
	carregar_lista(&lista);
   do {
        limpa_tela();	
   	    monta_tela();
        opcao = escolhe_opcao();
   	switch (opcao) {
      	case '0':
         	 listar();
           break;
      	case '1':
         	 incluir();
           break;
      	case '2':
        	 alterar();
           break;
      	case '3':
         	 excluir();
           break;
         case '9':
	         gravar_lista(lista);
         	 exit(1);
           break;
      }
   } while (1);
}