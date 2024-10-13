#include <stdio.h>
#include <stdlib.h>

int main()
{
        int result,a,b;
        printf("Evaluation of (a+b)^2");
        printf("\nEnter value for 'A':");
        scanf("%d",&a);
        printf("\nEnter value for 'B':");
        scanf("%d",&b);

        result = (a*a) + (2 * a * b) + (b * b );
        printf("The expanded form of (a + b)^2 is: %d^2 + 2*%d*%d + %d^2 = %d\n", a, a, b, b, result);
        return 0;
}
