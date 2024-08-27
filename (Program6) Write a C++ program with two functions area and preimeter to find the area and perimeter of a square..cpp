
#include <iostream>
using namespace std;

// Function declarations 

double area(double side);
double perimeter(double side);

    int main()
 {
    double side;

    cout << "Enter the length of the side of the square: "<< endl;
    cin >> side;

    // Call the functions

    area(side);
    perimeter(side);


    cout << "Area of the square: " << area << endl;
    cout << "Perimeter of the square: " << perimeter << endl;

    return 0;
}

// Function definitions
double area(double side)
{
    return  side * side;
}

double perimeter(double side)
{
    return 4 * side;
}