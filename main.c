#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

char alphc[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char alphm[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(int argc, char  *argv[]){
    if(argc == 2){
    int key = atoi(argv[1]);

    //get_string("plaintext: ")
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i =0; i < strlen(plaintext);i++){
         if((int)plaintext[i] >=65 && (int)plaintext[i] <= 90){
              if((int)plaintext[i] + key > 90){
                int value = ((int)plaintext[i] + key) - 90;
                printf("%c",alphc[value-1]);
            }else{
                  printf("%c",(plaintext[i] + key));
            }
        }else if((int)plaintext[i] >= 97 && (int)plaintext[i] <= 122){
            if((int)plaintext[i] + key > 122){
                int value = ((int)plaintext[i] + key) - 122;
                printf("%c",alphm[value-1]);
            }else{
                  printf("%c",(plaintext[i] + key));
            }

        }else{
             printf("%c",plaintext[i]);
        }

    }
            printf("\n");
    }else{
        printf("Usage: ./caesar key");
    }
    return 0;
}
