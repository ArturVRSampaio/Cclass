#include <stdio.h>


int main(){
    char me[20];
    int age;
    printf("What is your name?\n");
    scanf("%s", me);


    printf("how old are you?\n");
    scanf("%i", &age);

    printf("Darn glad to meet you, %s!\n", me);
    printf("and you are %i years old!\n", age);
    return(0);
}