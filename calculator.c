#include<stdio.h>
int main(){
    int choice;
    do{
    printf("Welcome to Simple Calculator\n");
    printf("\nChoose a option:\n");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulus");
    printf("\n6.Power");
    printf("\n7.Exit");
    printf("\nNow, Enter your choice:");
    scanf("%d",&choice);
    }while (choice!=7);
    return 0;
}
