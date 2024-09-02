#include <iostream>
using namespace std;

int num(int n)
{
    if (n == 1)
        return 1;
         
    cout<<n<<" ";
    num(n - 1);
    
}

int main()
{
    int ans = num(5);
    cout << ans << endl;
    return 0;
}