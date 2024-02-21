#include <stdio.h>

int main() {
    char lowercase, uppercase;

    putchar("Alphabet en minuscules : \n");
    for(lowercase = 'a'; lowercase <= 'z'; ++lowercase) {
        printf("%c ", lowercase);
    }

    putchar("\nAlphabet en majuscules : \n");
    for(uppercase = 'A'; uppercase <= 'Z'; ++uppercase) {
        printf("%c ", uppercase);
    }

    putchar("\n");

    return 0;
}
