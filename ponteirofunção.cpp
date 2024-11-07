#include<stdio.h>

//ponteiro para fun��es

//fu��o para omar
int soma(int a, int b){
	return a + b;
}

//fun��o subtrair

int subtrair(int a, int b){
	return a - b;
	
}


//void - recebe ponteiros

void calcular(int x, int y, int(*operacao)(int, int)){
	int resultado = operacao(x, y);
	printf("Resultado: %d\n", resultado);
}

int main(){
	int a = 10, b = 5;
	
	calcular(a, b, soma);
	calcular(a, a, subtrair);
	
	return 0; 
}
