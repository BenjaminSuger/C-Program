#include <stdio.h>
#include <stdlib.h>

#include "function.h"

int main(){
    stack s = {NULL,0};

    push(&s,4,'a');
    push(&s,7,'b');
    push(&s,42,'c');

    //printf("le nb de node dans ma stack %d\n",s.nb);

    //printf("lettre top of the stack %c\n",(*s.haut).c);
    //printf("lettre pointe par node top stack %c\n",(*s.haut).next->c);
    //printf("lettre pointer par node 2 top stack %c\n",((*s.haut).next)->next->c);
    peek(&s);
    pop(&s);
    peek(&s);
    pop(&s);
    peek(&s);
    push(&s,45,'y');
    push(&s,4,'r');
    peek(&s);


    free(s.haut);

}
