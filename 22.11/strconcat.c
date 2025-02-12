#include <stdio.h>
#include <string.h>
#include "mystrings.h"

#define MAX_LEN 50

int main(int argc, char *argv[]) {
    if (argc != 3) {  
        printf("Usage: ./strconcat.out <string1> <string2>\n");
        return 1;
    }

    // Проверяваме дали низовете не са по-дълги от MAX_LEN
    if (strlen(argv[1]) > MAX_LEN || strlen(argv[2]) > MAX_LEN) {
        printf("Error: Maximum length of strings is %d characters.\n", MAX_LEN);
        return 1;
    }

    char result[MAX_LEN * 2 + 1];  
    strcpy(result, argv[1]); 
    strconcat(result, argv[2]);  

    printf("Concatenated: %s\n", result);  
    return 0;
}

