#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;

    int r=3;
    r = r%n;
    for(int i=0,j=n-r-1; i<j ;i++, j--){
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    for (int i = n-r, j = n-1; i<j; i++, j--)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}