
#include <iostream>
using namespace std;

// Function definitions

char findGrade(int marks)
 {
     if (marks >= 90)
 {
        return 'A';
 } 
    else if (marks >= 80) 
{
        return 'B';
 } 
    else if (marks >= 70) 
 {
        return 'C';
 } 
    else if (marks >= 60)
 {
        return 'D';
 } 
    else if (marks >= 50)
 {
        return 'E';
 } 
     else
 {
        return 'F'; // Fail grade
 }
}

    int main() 
{
    int marks;

    // Input marks
        cout << "Enter the marks (0-100): " << endl;
         cin >> marks;


    // Call the function 

         char grade = findGrade(marks);

    // Output the grade

         cout << "The grade is: " << grade << endl;

        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

    return 0;
}