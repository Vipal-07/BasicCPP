#include <iostream>
#include <vector>

using namespace std;

int first(vector<int> arr, int i, int targetValue)
{
    if (i == arr.size())
    {
        return -1;
    }
    if (arr[i] == targetValue)
    {
        return i;
    }
    return first(arr, i + 1, targetValue);
}

int main()
{
    vector<int> arr = {1, 3, 4, 5, 5, 6, 7};
    cout << first(arr, 0, 5) << endl;
    return 0;
}