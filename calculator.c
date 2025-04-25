#include <stdio.h>
#include <math.h>

void print_menu();
double div_func(double, double);
double mod(int, int);

int main() {
    int choice;
    double first, second, result;
    while(1) {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7) {
            break;
        } 
        if (choice<1 || choice>7){
            fprintf(stderr,"Error!! \n You have entered the wrong choice.");
            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("\nPlease enter the second number: ");
        scanf("%lf", &second);

        switch (choice) {
            case 1: // Addition
                result = first + second;
                break;
            case 2: // Subtraction
                result = first - second;
                break;
            case 3: // Multiplication
                result = first * second;
                break;
            case 4: // Division
                result = div_func(first, second);
                break;
            case 5: // Modulus
                result = mod((int)first, (int)second);
                break;
            case 6: // Power
                result = pow(first, second);
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        if(result !=NAN ){
        printf("Result of the operation = %.2lf\n", result);
        }
        printf("Develoved by Adesh Gurung.\n");
        printf("Email:adeshawm11@gmail.com\n");
    }
    return 0;
}

void print_menu() {
    printf("\n----------------------------");
    printf("Welcome to Simple Calculator\n");
    printf("\nChoose an option:\n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow, Enter your choice: ");
}

double div_func(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "Error! Division by zero.\n");
        return NAN;  
    } else {
        return a / b;
    }
}

double mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error! Modulus by zero.\n");
        return NAN;  
    } else {
        return a % b;
    }
}
