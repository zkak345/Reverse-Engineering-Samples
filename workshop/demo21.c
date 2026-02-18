#include <stdio.h>
#include <string.h>

// DEMO PURPOSE ONLY
// Shows XOR-obfuscated input key

void decode(char *data, int len, char key) {
    for (int i = 0; i < len; i++) {
        data[i] ^= key;
    }
}

int main() {
    char input[50];

    // XOR-encrypted version of: FLOSS_IS_COOL
    char encrypted_key[] = {
        0x13, 0x19, 0x1A, 0x06,
        0x06, 0x0A, 0x0C, 0x06,
        0x16, 0x16, 0x06, 0x1A,
        0x1A, 0x19, 0x00
    };

    printf("Secure Login System v3\n");
    printf("Enter access key: ");
    scanf("%49s", input);

    // Decrypt the stored key at runtime
    decode(encrypted_key, 14, 0x55);

    if (strcmp(input, encrypted_key) == 0) {
        printf("Access Granted\n");
        printf("Flag: REVERSING_MASTER\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
