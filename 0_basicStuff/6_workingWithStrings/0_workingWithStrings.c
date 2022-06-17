#include <stdio.h>
#include <string.h>

int main(){
    char str[8] = "example";
    char str2[8];
    strcpy(str2, str);
    char str3[7] = "example";
    int cmp;


    // ? what is a string???
    //  a string is a sequence of chars
    // assignExample => ["e","x","a","m","p","l","e","\0"]
    printf("character = %s \n",str);
    printf("character = %d,Stored as integer \n", str);

    printf("\n");
    printf("str3 = %s\n",str);

    // str len and c str limits !!
    // strings are read until the "\0" symbol
    // so, if we reach its maximun size problems will rappen!!!!
    printf("strlen \n");
    printf("str len = %li \n", strlen(str));
    printf("str3 len = %li \n", strlen(str3));


    // Comparing both the strings using strcmp() function
    cmp = strcmp(str, str2);
    
    if (cmp == 0){
        printf("The strings are equal \n");
    }else if (cmp > 0){
        printf("str is lexicographically greater than str3 \n");
    }else{
        printf("str3 is lexicographically greater than str1 \n");
    }

    return 0;
}
