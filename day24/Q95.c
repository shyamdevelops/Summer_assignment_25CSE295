//program to Find longest word.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], longest[100], word[100];
    int i = 0, j = 0, max = 0;
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';
            if (j > max) {
                max = j;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }
    printf("Longest word: %s", longest);
    return 0;
}