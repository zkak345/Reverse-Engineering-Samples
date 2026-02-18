#include<stdio.h>
#include<string.h>

int main (void) {
    char correct_hash[] = {307, 335, 299, 299, 287, 275, 351, '\0'};
    char key[8];
    char hashed_key[8];
    printf("Enter key input: ");
    scanf("%9s", key);
    for (int i = 0; i < 7; i++) {
        hashed_key[i] = (key[i] * 4  - 5);
    }

    if (strcmp(hashed_key, correct_hash) == 0) {
        printf("Success!\n");
    }
    else{
        printf("Try again!\n");
    }
    return 0; 
}