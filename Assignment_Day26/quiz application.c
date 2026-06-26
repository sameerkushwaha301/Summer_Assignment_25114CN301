#include <stdio.h>
int main() {
    int answer, score = 0;
    printf("===== Quiz Application =====\n");
    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;
    // Question 2
    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    // Question 3
    printf("\nQ3. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    // Display final score
    printf("\nYour Score = %d/3\n", score);
    return 0;
}
