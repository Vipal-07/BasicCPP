#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> arr[], int si, int mid, int ei){
    int i = si;
    int j = mid+1;
    while(i>=mid&& j<=ei){
        if(arr[i]>arr[j]{
            arr.push_back
        })
    }

}

int midmerge(vector <int> arr[], int si, int ei){
    int mid = (si+ei)/2;

    if(si>=ei){
        return;
    }

    midmerge( arr,  si,  mid);
    midmerge( arr,  mid+1,  ei);
    merge(arr, si, mid,ei);
}


int main(){
    return 0;
}







