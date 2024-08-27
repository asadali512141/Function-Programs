
#include <iostream> 
using namespace std;

void displayPredecessorAndSuccessor(int number)
 {
    int predecessor, successor;
     predecessor = number - 1;
     successor = number + 1;

    cout << "Predecessor of " << number << " is: " << predecessor << endl;
    cout << "Successor of " << number << " is: " << successor << endl;

    
        cout<< "My name is AsadAli." << endl;
        cout<< "Roll number : 13. " << endl;
}

    int main()
 {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    displayPredecessorAndSuccessor(num);

    return 0; 
}