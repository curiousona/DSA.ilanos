/* Single digit number is always a palindrome number */
#include <iostream>
using namespace std;

int reverseNumber(int nums)
{
    int rev = 0;
    while (nums > 0)
    {
        rev = rev * 10 + nums % 10;
        nums = nums / 10;
    }
    return rev;
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function to reverse the number
    int reversed = reverseNumber(number);

    cout << "Reverse Number is: " << reversed << endl;
    if (number == reversed)
    {
        cout << "It is a Palindrome number";
    }
    else
        cout << " It is Not!";

    return 0;
}
