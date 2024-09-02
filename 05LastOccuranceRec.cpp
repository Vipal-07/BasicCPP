#include <iostream>
#include <vector>

using namespace std;

int lastOccur(vector<int> arr,  int target, int i)
{
    if (i == arr.size())
    
        return -1;
    
    int foundIndex = lastOccur(arr, target, i + 1);
    if (foundIndex == -1 && arr[i] == target)
    {
        return i;
    }
    return foundIndex;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5,  6, 8};
    cout << lastOccur(arr, 5, 0) << endl;
    return 0;
}