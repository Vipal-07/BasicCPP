#include <iostream>
using namespace std;

// factorial

int fact(int n)
{
    if (n == 0) return 1;
        
    
    return n * fact(n - 1);
}

int main()
{
    int ans = fact(3);
    cout << ans <<endl;
    return 0;
}