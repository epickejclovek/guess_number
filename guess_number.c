#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// made by https://github.com/epickejclovek !!
int start(int random_number) {
    int guess;
    while (1 > 0) {
        printf("cislo: \n");
        scanf("%d", &guess);
        if (guess > random_number) {
            printf("cislo je mensi\n");
        } else if (guess < random_number) {
            printf("cislo je vetsi\n");
        } else if (guess == random_number) {
            printf("vyhral jsi!");
            break;
        }
    }
}    
int main() {
    srand(time(NULL));
    int random_number = rand() % 300;
    start(random_number);
}