#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;  
        sum = sum + digit;   
        n = n / 10;          
    }

    return sum;
}
int main()
{
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Sum of individual digits: "
             << sumOfDigits(num) << endl;
    }
    else
    {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}