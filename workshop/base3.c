#include <windows.h>
#include <stdio.h>

// DEMO ONLY – harmless file creation example

int main() {

    HANDLE hFile = CreateFileA(
        "output.txt",          // file name
        GENERIC_WRITE,         // write access
        0,                     // no sharing
        NULL,                  // default security
        CREATE_ALWAYS,         // overwrite if exists
        FILE_ATTRIBUTE_NORMAL, // normal file
        NULL                   // no template
    );

    if (hFile == INVALID_HANDLE_VALUE) {
        printf("Failed to create file.\n");
        return 1;
    }

    const char *data = "This file was created for a capa demo.\n";
    DWORD bytesWritten;

    WriteFile(
        hFile,
        data,
        strlen(data),
        &bytesWritten,
        NULL
    );

    CloseHandle(hFile);

    printf("File created successfully.\n");

    return 0;
}
