#include <iostream>
using namespace std;

// Function declarations 

void cal(int s, int t, char ch);

    int main()
{
    int a ,  b;
    char c;
     
     cout<<"Enter first number , operator and second number." << endl;
     cin>>a>>c>>b;

      // Call the functions

      cal(a,b,c);

      return 0;

}

// Function definitions

void cal(int s, int t, char ch)
{
    switch (ch)
    {
        case '+':
            cout<< s << "+" << t << "=" << s+t;
        break;
    
    
        case '-':
            cout<< s << "-" << t << "=" << s-t;
        break;
        
        case '*':
            cout<< s << "*" << t << "=" << s*t;
        break;
        
        case '/':
            cout<< s << "/" << t << "=" << s/t;
        break;
        
        case '%':
            cout<< s << "%" << t << "=" << s%t;
        break;

    default:
            cout<< "Invalid operator!" << endl;
    
    }

        
        cout<< "\nMy name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
}
