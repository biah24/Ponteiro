#include<stdio.h>

int main(){
	int var = 15;
	
	//ponteiro
	int *ptr;
	
	ptr = &var;
	
	
	//conte�do de var
	printf("Conteude de var: %d\n", var);
	printf("endereco de var: %p\n", &var);
	
	
	//conte�de de ptr
	printf("Conteude de ptr: %d\n", *ptr);
	printf("endereco de ptr: %p\n", &ptr);
	
	
}
