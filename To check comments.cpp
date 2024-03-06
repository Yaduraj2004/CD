#include <stdio.h>

int main() {
    char ch, prevCh = '\0';

    while ((ch = getchar()) != EOF) {
        if (prevCh == '/' && ch == '/') {
            // Skip until the end of the line
            while ((ch = getchar()) != EOF && ch != '\n') {}
        } else {
            printf("%c", prevCh);
            prevCh = ch;
        }
    }

    return 0;
}

