
#include <iostream>
using namespace std;

// Function declaration

void fun(void);

    int main()
{
    
    int i;

      for( i = 1; i <= 5; ++i)

     // Call the functions

     fun();

    
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

    return 0;

}

// Function definitions

void fun(void)
{
    static int n = 0;

        n++;
    
    cout<< "Value of n = " << n << endl;

    
}


