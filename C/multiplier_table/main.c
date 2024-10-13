#include <stdio.h>
void main() {
    int n, i, j;

    printf("Enter a number to display the multiplication table up to: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }
}
