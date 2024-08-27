
#include <iostream> 
using namespace std;

void factorial(int number);

    int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

     factorial(num);
     return 0;
}

// Function definition
  void factorial(int number)
{
     int m;
     int fact;
     fact =1;
     for(m=1; m<=number; m++)
     {
      fact *= m;
      cout<< "Factorail of " << number << "is" << fact << endl; 
     } 

     
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
}