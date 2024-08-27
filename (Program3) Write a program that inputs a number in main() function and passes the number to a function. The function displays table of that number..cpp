#include <iostream>
using namespace std;
void displayTable(int number) 
    
{
        cout << "Multiplication table for " << number << " is:" << endl;
        
    for (int i = 1; i <= 10; ++i) 
    {
        cout << number << " x " << i << " = " << number * i << endl;

        
    }
        
        cout<< " My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
}

    int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayTable(num);

    return 0; 
}
