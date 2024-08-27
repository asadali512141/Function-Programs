#include <iostream>
using namespace std;
void max(int r, int k);

    int main()
{
    int a, b;
    cout<< "Enter two nummbers:" << endl;
    cin>>a>>b;
    max(a,b);
    return 0;

}   
    void max(int r, int k)
{
    if(r > k)
        cout<< "Maximun number is" <<r << endl;
    else
        cout<< "Maximun number is" <<k << endl;

    cout<< " My name is AsadAli." << endl;
    cout<< "Roll number : 13. " << endl;

}
