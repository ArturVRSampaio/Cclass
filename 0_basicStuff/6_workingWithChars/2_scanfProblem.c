#include <stdio.h>

int main(){
    char readFromUser[20];

    // ! scanfLimitation!
    printf("gimme a string!! \n");
    scanf("%s", readFromUser);
    printf("did you mean:");
    printf("%s ",readFromUser);

    return 0;
}
