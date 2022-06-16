#include <stdio.h>


int main(){
    int user_input;
    int stop_program = 0;

    while(stop_program != 1){

        printf("1 ou 0 para continuar \n");
        printf("9 para terminar \n");
        scanf("%i", &user_input);

        if (user_input == 9){
            stop_program =1;
        }else if (user_input !=1 && user_input !=0){
            printf("escolha invalida \n");
        }else{
            printf("sua escolha foi valida!!! parabens por ler as instruções \n");
        } 
    } 
    return 0;
}