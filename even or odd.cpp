#include<iostream>
using namespace std;

int main()
{
    int number, remainder;

    cout << "Enter the number : ";
    cin >> number;
    remainder = number % 2;
    if (remainder == 0)
        cout << number << " is an even " << endl;
    else
        cout << number << " is an odd " << endl;

    return 0;
}
