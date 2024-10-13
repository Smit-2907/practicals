#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0, num[10];
    float average;

    for (int i = 0; i < 10; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &num[i]);
        sum += num[i];
    }

    average = sum / 10.0;

    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);

    return 0;
}
