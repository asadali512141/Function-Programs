#include <iostream>
using namespace std;

// Function declarations 

int sqr(int num);
int cube(int num);

    int main()
{
    int w, u, r;

        cout<<"Enter an integer:" << endl;
        cin>>w;
        
        cout<<"Enter an integer:" << endl;
        cin>>u;

         // Call the functions

         r = sqr(w) + cube(u);
            cout<< "Result=" << r << endl;

            
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;

        return 0;

}

// Function definitions

int sqr(int num)
{
    return num * num;
}

int cube(int num)
{
    return num * num* num;

        
}

