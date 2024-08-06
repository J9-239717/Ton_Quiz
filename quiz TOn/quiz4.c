#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int check(char s[], char a[], char ch);
void rep_(char s[], char a[]);

int main(void) {
    char ref[5][100] = { 
        "meet at midnight",
        "let there be love",
        "we will rock you",
        "don't worry be happy",
        "what a wonderful world"
    };

    char solution[100] = { 0 };
    char answer[100] = { 0 };
    char ch;
    int tries = 20;
    srand((unsigned)time(NULL));
    strcpy(solution, ref[rand() % 5]);// I ADD
    
    rep_(solution, answer);

    while (1) {
        if (tries == 0) { // I ADD
            printf("You have used all the limited number of times.\n");
            break;
        }
        printf("Please enter a string : %s\n", answer);
        printf("Guess the letter: ");
        ch = getchar();

        if (check(solution, answer, ch) == 1) {
            printf("Correct answer. Quit the game.\n");
            break;
        }
        tries--;
    }
    return 0;
}

void rep_(char s[], char a[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
///////////// I ADD ///////////////////////////////////////
        if (isalpha(s[i])) {
            a[i] = '_';
        } else {
            a[i] = s[i];
        }
    }
    a[i] = '\0';
///////////////////////////////////////////////////////////
}

int check(char s[], char a[], char ch) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
///////////// I ADD ///////////////////////////////////////
        if (tolower(s[i]) == tolower(ch)) {
            a[i] = s[i];
        }
    }
///////////////////////////////////////////////////////////
    if (strcmp(s, a) == 0) return 1;// I ADD
    else return 0;
}
