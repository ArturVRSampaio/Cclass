#include <stdio.h>
#include <stdlib.h>

int main(){
    char readFromUser[5];

    //? lets talk about I/O again
    printf("this printf() \n");
    puts("does the same as this puts()");

    puts("insted of scanf() we can use the gets");
    gets(readFromUser);
    puts("...");
    puts("BUT, we shouldent cuz it can be exploited");

    return 0;
}
