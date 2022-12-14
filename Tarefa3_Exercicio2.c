#include <stdio.h>

int main (){
    int x = 12, *ponteirox = &x;
    int y = 11, *ponteiroy = &y;
    if (*ponteirox > *ponteiroy){
	    printf ("X: %i", *ponteirox);
    }
	else{
	    printf ("Y: %i", *ponteiroy);
	}
	return 0;
}