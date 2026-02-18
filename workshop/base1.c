#include <stdio.h>
#include <string.h>
// INSECURE CODE DO NOT USE 
// This code is for Reverse Engineering demo purposes only
// This is a strings sample of extracting hardcoded password from binary


int main() {
    char key[100]
    prtinf("Welcome to my application\n");
    printf("You will never find my password\n");
    printf("Enter Key: ");
    scanf("%99s", key);
    if (strcmp(key, "mykeyis123") == 0) {
        printf("Access Granted, your flag is REV_101"\n);
 
    } else {
        printf("Access denied \n");
    }
    
    return 0;
}