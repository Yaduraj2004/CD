#include <stdio.h>

int main() {
    int ch;
    int whitespaceCount = 0, newlineCount = 0;

    printf("Enter text ( Ctrl+Z followed by Enter when done):\n");

    while ((ch = getchar()) != EOF) {
       
        if (ch == ' ' || ch == '\t') {
            ++whitespaceCount;
        }
       
        else if (ch == '\n') {
            ++newlineCount;
        }
    }

    printf("Number of whitespaces (spaces and tabs): %d\n", whitespaceCount);
    printf("Number of newline characters: %d\n", newlineCount);

    return 0;
}

