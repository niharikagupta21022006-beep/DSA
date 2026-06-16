#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    return IsSorted(arr + 1,n - 1);

}
int main(){
    int arr[] = {5,7,8,9};
    int n = 5;

    if(IsSorted(arr,n)){
        cout << "Array is sorted." << endl;

    }

    else{
        cout << "Array is not sorted." << endl;
    }
}