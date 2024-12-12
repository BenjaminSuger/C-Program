#include <stdlib.h>
#include <stdio.h>
#include "function.h"

void push(stack *s,int valeur, char c){
    Node_s *nouveau = malloc(sizeof(Node_s));
    if(nouveau == NULL){
        printf("pas d'allocation de mémoire\n");
        exit(1);
    }
    else{
        nouveau->valeur = valeur;
        nouveau->c = c;
        nouveau->next = s->haut;
        s->haut = nouveau; 
        s->nb++;
    }
}


void peek(stack *s){
    if(s->nb>0){
        printf("la lettre top stack %c\n",s->haut->c);
    }
    else{
        printf("il n'y a rien dans la stack\n");
    }
}

void pop(stack *s){
    if(s->nb <= 0){
        printf("il n'y a rien \n");
    }
    else{
        s->haut = s->haut->next;
        s->nb--;
    }
}