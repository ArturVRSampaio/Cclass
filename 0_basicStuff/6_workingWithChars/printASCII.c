#include <stdio.h>

int main(){
    char b;

    for (int i = 0; i <= 127; i++)
    {   
        b = (char) i;
        printf("Dec: %i, char: %c \n", i,b);
    }
    
    return 0;
}
