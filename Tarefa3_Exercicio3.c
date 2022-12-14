#include <stdio.h>

int main (){
    int x = 0, *ponteirox = &x;
    int y = 0, *ponteiroy = &y;
	printf("Escreva o X:");
	scanf("%i", &x);
	printf("Escreva o y:");
	scanf("%i", &y);
    if (*ponteirox > *ponteiroy){
	    printf ("X: %i", *ponteirox);
    }
	else{
	    printf ("Y: %i", *ponteiroy);
	}
	return 0;
}