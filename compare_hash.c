#include <stdio.h>


/*the goal is here is to compare a hash sha512 for example (at least 2 strings) 
 * without using strcmp() or any other tool
*/

void compare_hash(char *a, char *b);


int main(int argc, char * argv[]){

  char firstElement[128], secondElement[128]; //128 for SHA512 hash (no interactive size in this project)
  //check if anything is wrong + help
  if(argv[1] == NULL || argv[2] == NULL){
    printf("You need to enter 2 value (space separated) ./compare_hash <first hash> <second hash>\n");
  }
  else{
    compare_hash(argv[1],argv[2]);
  }
  return 0;
}


void compare_hash(char *a, char *b){
  int i=0,countA=0,countB=0,bool=0;
    
  //first check if the same length
  while(a[i] !='\0'){
    countA++;
    i++;
  }
  i=0;//reset i to keep the same variable and I didn't use for loop
  while(b[i] !='\0'){
    countB++;
    i++;
  }
  //if not same length => exit with a message otherwise start comparing
  if( !(countA==countB) ){
    printf("not same length\n");
  }
  else{
    for(i=0;i<countA;i++){
      if( !(a[i]==b[i]) ){ //if one char is different you exit
        bool++;
        printf("not same value\n");
        break;
      }
      else{
        bool=0;//as we are in the for loop we don't want to print each time something so we let bool =0
      }
    }
    if(bool==0){printf("same value\n");}//we check here if bool is still at 0
  }
}