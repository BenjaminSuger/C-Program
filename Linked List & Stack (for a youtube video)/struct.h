typedef struct Node{
    int valeur;
    char c; 
    struct Node *next;
}Node_s;

typedef struct stack_s{
    struct Node *haut;
    int nb; 
}stack;


