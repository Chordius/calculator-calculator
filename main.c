#include <stdio.h>


int addition(float a,float b) {
  return a + b;
}
int subtraction(float a,float b) {
  return a - b;
}

int multiplication() {
  return a * b
}

int division() {
  return a / b
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
                printf("%f", result);
                break;
            case 2:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = subtraction(a, b);
                printf("%f", result);
                break;
            case 3:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = multiplication(a, b);
                printf("%f", result);
                break;
            case 4:
                printf("Input first number: ");
                scanf("%f", &a);
                printf("Input second number: ");
                scanf("%f", &b);
                result = division(a, b);
                printf("%f", result);
                break;
            case 5:
                break;
            default:
                printf("Not a valid choice. Try again!");
        }
        puts("");
    } while (choice != 5);

    printf("Thanks for using CALCULATOR CALCULATOR!");

    return 0;

}
