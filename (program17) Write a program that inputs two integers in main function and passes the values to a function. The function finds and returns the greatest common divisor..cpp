#include <iostream>
using namespace std;

//function declaration

int gcd(int a, int b);

int main() 
{
    int num1, num2;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the function
    int result = gcd(num1, num2);

    // Output the result
    cout << "The Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is: " << result << endl;

    
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

    return 0;
}

// Function definitions

int gcd(int a, int b)
{
    if (b == 0) 
 {
        return a;
 }
    return gcd(b, a % b);
}
