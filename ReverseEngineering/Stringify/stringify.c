#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void encrypt(char *str);
int checkIt(char argument[]);

char encryptedText[16] = "REDACTED";
char saveArgument[16];
int length = 16;
int lengthArgument;
int check;

int ord(char c){
    return (int)c;
}

int main(int argc, char *argv[]){
    //Help Menu
    if (argc < 2){
        printf("Usage : %s <passcode>\n", argv[0]);
    return 1;
    }
    // Check if the length matches 
    checkIt(argv[1]);
}

int checkIt(char argument[]){
    strcpy(saveArgument,argument);
    lengthArgument = strlen(argument);
    if(lengthArgument != length ){
        printf("fake flag : TriosCTF{%s}",saveArgument);
        encrypt(argument);
        return 0;
    }
    else{
        // Run rot32 command 
        encrypt(argument);
        for(int i=0;i<16;i++){
            {
                if(ord(argument[i] != ord(encryptedText[i]))){
                        printf("wrong passcode");   
                        return 1;
                    }
            }
        }
        if (check == 0){
            printf("Congratulations !!\n");
            printf("Flag : TriosCTF{%s}\n",saveArgument);
        }
        else{
            printf("wrong passcode");
        }
    }
    return 1;
}

void encrypt(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') + 32) % 26 + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') + 32) % 26 + 'a';
        }
        i++;
    }    
}

