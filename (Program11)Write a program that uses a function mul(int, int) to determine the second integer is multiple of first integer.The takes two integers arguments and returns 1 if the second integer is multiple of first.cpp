
#include <iostream>
using namespace std;

// Function declaration

int mul(int a, int b);

    int main()
 {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the function 

    if (mul(num1, num2))
    
{
            cout << num2 << " is a multiple of " << num1 << "." << endl;
}   else
 {
            cout << num2 << " is not a multiple of " << num1 << "." << endl;
}

    
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

    return 0;
}

// Function definition
int mul(int a, int b) 
{

    if (a == 0)
 {
        return 0;
 }
    return (b % a == 0);
}