#include <stdio.h>

int main () {
    int counter = 1;
    while (counter <= 5)
    {
        printf("count: %d\n", counter);
        counter = counter + 1;
    }
    printf("Loop finished.\n");
    return 0;
}