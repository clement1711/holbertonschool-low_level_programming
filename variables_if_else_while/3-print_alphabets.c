#include <stdio.h>

int main() {
    char lowercase, uppercase;

    putchar("Alphabet en minuscules : \n");
    for(lowercase = 'a'; lowercase <= 'z'; ++lowercase) {
        putchar("%c ", lowercase);
    }

    putchar("\nAlphabet en majuscules : \n");
    for(uppercase = 'A'; uppercase <= 'Z'; ++uppercase) {
        putchar("%c ", uppercase);
    }

    putchar("\n");

    return 0;
}
