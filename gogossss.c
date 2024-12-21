#include <stdio.h>
#include <string.h>

// Define the Student structure
typedef struct
{
    int ID;          // Student ID
    float GPA;       // Student GPA
    char status[20]; // Student status (PASS or FAIL)
} Student;

int main()
{
    Student st; // Declare a variable of type Student

    // Input: Read st ID and GPA
    scanf("%d %f", &st.ID, &st.GPA);

    // Process: Determine the st's status using Ternary Operator
    (st.GPA >= 2.00) ? strcpy(st.status, "PASS") : strcpy(st.status, "FAIL");

    // Output: Print the st's ID and status
    printf("%d %s\n", st.ID, st.status);

    return 0;
}
