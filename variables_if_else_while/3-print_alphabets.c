#include <stdio.h>

int main() {
    char lowercase, uppercase;

    printf("Alphabet en minuscules : \n");
    for(lowercase = 'a'; lowercase <= 'z'; ++lowercase) {
        printf("%c ", lowercase);
    }

    printf("\nAlphabet en majuscules : \n");
    for(uppercase = 'A'; uppercase <= 'Z'; ++uppercase) {
        printf("%c ", uppercase);
    }

    printf("\n");

    return 0;
}
