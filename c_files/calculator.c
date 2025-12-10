// ...existing code...
#include <stdio.h>
#include <math.h>

int main(void) {
    int num, choice, i, flag = 0;
    long long fact = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Invalid number input\n");
        return 1;
    }

    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Factorial");
    printf("\nEnter your choice: ");
    if (scanf("%d", &choice) != 1) {
        fprintf(stderr, "Invalid choice input\n");
        return 1;
    }

    switch (choice) {
        case 1:
            if (num < 0) {
                printf("Square Root of negative number is not supported (complex)\n");
            } else {
                printf("Square Root = %.2f\n", sqrt((double)num));
            }
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if (num <= 1) {
                printf("%d is NOT prime\n", num);
            } else {
                flag = 0;
                for (i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    printf("%d is PRIME\n", num);
                else
                    printf("%d is NOT prime\n", num);
            }
            break;

        case 5:
            if (num < 0) {
                printf("Factorial of negative number is undefined\n");
            } else {
                fact = 1;
                for (i = 1; i <= num; i++) {
                    fact = fact * i;
                }
                printf("Factorial = %lld\n", fact);
            }
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}