#include <iostream>
using namespace std;

int countDigit(int nums)
{
    int count = 0;

    // Handle the case of zero separately
    if(nums == 0)
        return 1;

    // Count the number of digits
    while (nums != 0)
    {
        nums = nums / 10;
        count++;
    }
    return count;
}



