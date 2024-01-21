#include <stdio.h>
// #include <string.h>
int main(void){
    
    // printf("hello, world\n");
    // typedef char* string;
    // string s = "GH";
    char* s = "GH";
    char* t = "GH";

    if ((void*)s == (void*)t)
    {
        printf("%d", s);
    }
    

}