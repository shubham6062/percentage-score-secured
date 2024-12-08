#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[50];
    int roll_no;
    int marks1, marks2, marks3, marks4;
    int totalMarks;
    float percentage;
    // Input student's details
    printf("Enter the student's name: ");
 scanf(" %[^\n]", name); // To accept a string with spaces
    printf("Enter the roll number: ");
    scanf("%d", &roll_no);
    // Input marks for 4 subjects
    printf("Enter marks for subject 1 (out of 100): ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%d", &marks2);

    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%d", &marks3);

    printf("Enter marks for subject 4 (out of 100): ");
    scanf("%d", &marks4);

    // Calculate total marks and percentage
    totalMarks = marks1 + marks2 + marks3 + marks4;
    percentage = (totalMarks / 400.0) * 100;

    // Output the result
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
