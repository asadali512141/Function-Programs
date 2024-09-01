
#include <iostream>
using namespace std;

// Function declaration

int g;
void show(void);

    int main()
{
        cout<< "Enter a number:" << endl;
        cin>> g;

        cout<<"Value of g before function call:" << g << endl;

        // Call the function 

        show();

        cout<<"Value of g after function call:" << g << endl;

        
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

    return 0;
}

// Function definitions

void show(void)
{
    g = g * 2;
     
}



