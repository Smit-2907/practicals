//To check if the character repeats the count return the previous characters's count
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CHARS 256

void printAsciiValues(const char *str) {
    bool seen[MAX_CHARS] = {false};
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        unsigned char ch = str[i];

        if (seen[ch]) {
            printf("Character '%c' has been seen before. Stopping...\n", str[i]);
            break;
        }
        seen[ch] = true;

        i++;
        count++;
    }
    printf("Total characters processed: %d\n", count);
}

int main() {
    char str[256];
    char ch;

    do {
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        size_t length = strlen(str);
        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
        }

        printAsciiValues(str);

        printf("\nDo you want to continue (y/n): ");
        scanf("%c", &ch);

        while (getchar() != '\n');

    } while (ch == 'y');

    return 0;
}
