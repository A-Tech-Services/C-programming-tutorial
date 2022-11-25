#include <stdio.h>

int main(){
    printf("Hello World!\n");

    printf("This isn't my first C programming language anyways.");

    printf("\n1\t2\t3\n4\t5\t6\n");

    printf("\"I like pizza\" - Abraham Lincoln Probably\n");

    // Declaring a variable and assigning values
    int age; // variable declared
    age = 2; // variable initialized
    float GP;

    GP = 3.07;

    char grade = 'C';

    char name[] = "Oluwapelumi";

    printf("%s\n", name);
    printf("You are %d Years Old\n", age);
    printf("Your GP is %0.15f\n", GP);
    printf("Your Grade is %c\n", grade);

    float CGPA = 2.354;

    printf("your CGPA is: %0.3f", CGPA);
    

    return 0;
}