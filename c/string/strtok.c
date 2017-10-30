#include <stdio.h>
int main() 
{
        char *str =  "Hello-This-is-repository";
        char *token;
        
        token = strtok(str, "-");
        
        while(token != NULL) {
                printf("Tokens are : %s\n", token);
                token = strtok(NULL, "-");
        }
        return 0;
 } 
        
                
        
