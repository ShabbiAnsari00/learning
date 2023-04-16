#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, qutint, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    qutint = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Qutint = " << qutint << endl;
    cout << "Remainder = " << remainder;

    return 0;
}