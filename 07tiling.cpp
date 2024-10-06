#include <iostream>
using namespace std;

int tilling(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int ans1 = tilling(n - 1);
    int ans2 = tilling(n - 2);
    int result = ans1 + ans2;
    return result;
}

int main()
{
    cout << tilling(30) << endl;
    return 0;
}