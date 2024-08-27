#include <iostream>
using namespace std;

// Function declarations 

void prime(int n);

    int main()
{
    int a;

    cout<<"Enter an integer." << endl;
    cin>>a;

  // Call the functions

     prime(a);

     return 0;

}

// Function definitions

void prime(int n)

{
    int c, p;
    p = 1;

    for(c = 2; c <= n/2; c++)
        if(n%c==0)
    {
        p = 0;
        break;
    }

    if(p==1)
        cout<< "Prime number is" << n << endl;
    else 
        cout<< "Composite number is" << n << endl;

        
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
}
