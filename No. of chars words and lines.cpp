#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int chars = 0, words = 0, lines = 0;

    while ((ch = getchar()) != EOF) {
        chars++;
        if (isspace(ch))
            words++;
        if (ch == '\n')
            lines++;
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    return 0;
}

