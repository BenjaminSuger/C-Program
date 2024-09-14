#include <stdio.h>

void convertor(int a);

int main(){
    int nb_hours;
    printf("combien d'heures ?\n");
    scanf("%d",&nb_hours);

    convertor(nb_hours);
    return 0;
}


void convertor(int a){
    int nb_days,nb_remaining_days,nb_months,nb_years,nb_hours;
    nb_days = a/24;
    nb_years = nb_days/365;
    nb_months = (nb_days/30) - (nb_years*12);
    nb_remaining_days = nb_days%30;
    nb_hours = a%24;

    if(nb_years>0){
        printf("%d years ", nb_years);
    }
    if(nb_months>0){
        printf("%d months ", nb_months);
    }
    if(nb_remaining_days >0){
        printf("%d days ", nb_remaining_days);
    }
    if(nb_hours>0){
        printf("%d hours", nb_hours);
    }
    
    printf("\n");
}