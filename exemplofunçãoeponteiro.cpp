#include<stdio.h>

//Ponteiros como par�metros de fun��es;
// procedimento(void) - n�o tem retorno e fun��o(return);

void trocar(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j =  temp;
}
int main(){
	int a=5, b=10, temp;
	printf("%d %d\n", a,b);
	
	trocar(&a,&b);
	printf("%d %d\n", a,b);
	
	 
}
