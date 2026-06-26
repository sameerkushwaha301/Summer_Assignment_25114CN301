#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};
int main() {
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);
    // Calculate total and percentage
    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;
    printf("\n----- MARKSHEET -----\n");
    printf("Roll No    : %d\n", s.roll);
    printf("Name       : %s\n", s.name);
    printf("Subject 1  : %.2f\n", s.m1);
    printf("Subject 2  : %.2f\n", s.m2);
    printf("Subject 3  : %.2f\n", s.m3);
    printf("Total      : %.2f\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    // Display grade
    if (s.percentage >= 90)
        printf("Grade      : A+\n");
    else if (s.percentage >= 75)
        printf("Grade      : A\n");
    else if (s.percentage >= 60)
        printf("Grade      : B\n");
    else if (s.percentage >= 40)
        printf("Grade      : C\n");
    else
        printf("Grade      : Fail\n");
    return 0;
}
