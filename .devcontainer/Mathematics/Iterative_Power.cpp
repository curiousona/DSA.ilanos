#include <iostream>
using namespace std;
int power (int x, int n){
    if(n == 0)
        return 1;
    else if (n == 1)
        return x;
    else {
        int R = power( x, n/2);
        if (n%2 == 0)
        return R * R;
        else 
            return R * x * R;
    }
}

int main() {
    // Your code here
   cout<< power(6,4);
    return 0;
}
