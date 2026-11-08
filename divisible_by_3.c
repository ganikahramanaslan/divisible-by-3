#include <stdio.h>

int main(void) {
    int n, i;
    int sum = 0;
    int count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
            count++;
        }
    }

    printf("Sum of numbers divisible by 3: %d\n", sum);
    printf("Count of numbers divisible by 3: %d\n", count);

    return 0;
}
