#include <stdio.h>


float addition(float a,float b) {
    return a + b;
}
float subtraction(float a,float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

int main() {
    int choice;
    float a, b, result;
    puts("=== CALCULATOR CALCULATOR ===");
    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Multiplication");
    puts("4. Division");
    puts("5. Exit");
    printf("Input your choice: ");
    scanf("%d", &choice);

    do {
        switch(choice) {
            case 1:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = addition(a, b);
                break;
            case 2:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = subtraction(a, b);
                break;
            case 3:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = multiplication(a, b);
                break;
            case 4:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = division(a, b);
                break;
            case 5:
                break;
            default:
                printf("Not a valid choice. Try again!");
        }
        printf("\nResult: %f", result);
        puts("");
    } while (choice != 5);

    printf("Thanks for using CALCULATOR CALCULATOR!");

    return 0;

}
