#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void choice(int choice);
void casino_choice(int *choice2);
void combat(int choice, int *choice2);

int main(){
    int choix;
    int choice2;
    int manche =0;
    printf("Bienvenue au Casino, vous jouez à Pierre-Feuille-Ciseau en 3 manches\nQuel choix faites vous?\n1)Pierre\n2)Feuille\n3)Ciseaux\n\nIl faut entrer un chiffre\n");
    while(manche<3){
      scanf("%d",&choix);
      choice(choix);
      srand(time(NULL));
      casino_choice(&choice2);
      combat(choix, &choice2);
      manche++;
    }
    return 0;
}


void choice(int choice){
  //sécurité du choix
  if(choice==1){
    printf("Vous avez choisie pierre\n");
  }
  else if(choice==2){
    printf("vous avez choisi feuille\n");
  }
  else{
    printf("vous avez prit ciseaux\n");
  }
}

void casino_choice(int *choice2){
  *choice2 =  rand()%3;
  if(*choice2==0){
    *choice2 = 3;
  }
  printf("%d\n",*choice2);
}


void combat(int choice, int *choice2){
    if(choice == *choice2){
        printf("égalité dommage\n");
    }
    else if( (choice == 1 && *choice2 == 2) || (choice == 2 && *choice2 == 3) || (choice == 3 && *choice2 == 1) ){
    printf("Perdu\n");
    }
    else{
    printf("C'est gagné\n");
    }
}
