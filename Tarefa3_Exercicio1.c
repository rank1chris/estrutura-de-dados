#include <stdio.h>

int main(){
    int i = 0, *ponteirointeiro = &i;
    float f = 1.2, *ponteirofloat = &f;
    char c ='c', *ponteirocharacter = &c;
    
    printf("Inteiro %i\n", *ponteirointeiro);
    printf("Float %f\n",  *ponteirofloat);
    printf("Char %c\n", *ponteirocharacter);  

   *ponteirointeiro = 10;
   *ponteirofloat = 513.4;
   *ponteirocharacter = 'd';

    printf("Inteiro %i\n", *ponteirointeiro);
    printf("Float %f\n",  *ponteirofloat);
    printf("Char %c", *ponteirocharacter);
}