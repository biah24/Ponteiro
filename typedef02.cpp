#include<stdio.h>
CADASTRO PONTO 1
CODIGO
DESCRI��O
PRECO
PRECO DE VENDA
QUANTIDADE ESTOQUE
ESOQUE MIN
LUCRO CAD 1
LUCRO PRO 2
PRODUTO COMESTOQUE BAIXO
CODIGO DELE

struct Livro{
	char titulo[40];
	char autor[50];
	int anoPublicacao;
	
};
//typedef - reescrever o tipo de dado

int main(){
	
	typedef struct Livro Livro;
	
	Livro livro1, livro2;
	
	printf("Cadastro 1\n");
	printf("Titulo: ");
	fgets(livro1.titulo, 40, stdin);
	printf("Autor: ");
	fgets(livro1.autor, 40, stdin);
	printf("Ano da publicacao: ");
	scanf("%i", &livro1.anoPublicacao);
	
	
	
	return 0;
}
