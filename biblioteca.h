#include <stdio.h>
#include <windows.h>

int cubo(int numero);
int cubo( int numero) {
	return numero * numero * numero;
}

int fatorial(int numero);
int fatorial(int numero){
	int fat;
	for(fat = 1; numero > 1; numero = numero - 1)
		fat = fat * numero;
		return fat;
}

int maior(int numero, int numero1);
int maior(int numero, int numero1){
	if(numero > numero1){
		return numero;
	}else{
		return numero1;
	}
}

int somar(int numero, int numero1);
int somar(int numero, int numero1){
	int num;
	int soma = 0; 
	for (num = numero; num <= numero1; num ++) {
    soma = num + soma;  
	}
	return soma;
}
