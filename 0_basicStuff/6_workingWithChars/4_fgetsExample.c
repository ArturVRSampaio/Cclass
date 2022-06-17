#include <stdio.h>
#define MAX 5

int main(){
    char readFromUser[MAX];

    fgets(readFromUser, MAX, stdin);
    puts(readFromUser);

    return 0;
}