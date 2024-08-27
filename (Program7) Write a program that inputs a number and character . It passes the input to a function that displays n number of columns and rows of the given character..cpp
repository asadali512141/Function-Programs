#include <iostream>
using namespace std; 

// Function definitions

void shape(int n, char c)
{
    int i , j;

    for(i = 1; i <= n; ++i)
{
        cout<<endl;

    for(j =1; j <= n; ++j)

        cout<<c;
 }
        
        cout<< "\n My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

}
    int main()
{
    int number;
    char ch;

    cout<<"\nEnter a number." << endl;
    cin>>number;

     cout<<"Enter a character." << endl;
     cin>>ch;

         // Call the functions

    shape(number, ch);

    return 0;

}

