#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if(n==0)
    return 1;
    int halfvalue = pow(x, n / 2);
    int halfpow = halfvalue * halfvalue;

    if (n % 2 != 0)
    {
        return x * halfpow;
    }
    return halfpow;
}
int main(){
    cout<< pow(2,4) <<endl;
    return 0;
}