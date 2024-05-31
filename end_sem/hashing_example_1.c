#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int hash[256] = { 0 };

    char input[100];
    printf("Enter string: ");
    scanf("%s", input);
    
    int index = -1;
    for(int i = 0; input[i] != '\0'; i++) {
        hash[input[i] - 'a']++;
        if(hash[input[i] - 'a'] >= 2) {
            index = i;
            break;
        }
    }
    if(index != -1) printf("Repeating character found at index %d\n", index);
    else printf("No repeating character found!\n");

    return 0;
}