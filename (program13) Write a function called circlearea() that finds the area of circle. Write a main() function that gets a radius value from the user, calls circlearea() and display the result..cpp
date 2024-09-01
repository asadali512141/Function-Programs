#include <iostream>
using namespace std; 

// Function definitions

float circlearea(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;

}

    int main()
{
    float radius, area;

        cout<< "Enter the Radius:" << endl;
        cin>> radius;

    // Call the function 

    radius = circlearea(radius);

        cout<<"The area of the circle =" << radius << endl;

        
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
        
    return 0;
}